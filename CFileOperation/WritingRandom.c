#include <stdio.h>

struct  clientData{
	int acctNum;
	char lastName[15];
	char firstName[15];
	int balance;
};

int main(){
	
	FILE *cfPtr;
	
struct	clientData client = {0,"","",0.0};
	
	if((cfPtr = fopen("credit.txt","rb+")) == NULL){
		puts("File could not be opened.");
	}
	else{
		printf("Enter account number(1 to 100 and 0 to end input.) ");
		scanf("%d",&client.acctNum);
		
		while(client.acctNum != 0){
			printf("Enter last name,first name and balance ");
			
			fscanf(stdin,"%14s%10s%d",client.lastName,client.firstName,&client.balance);
		
		fseek(cfPtr,(client.acctNum-1 ) *
		sizeof(struct clientData), SEEK_SET); 
		
		fwrite(&client,sizeof(struct clientData ),1,cfPtr);
		
		printf("Enter account number\n");
		scanf("%d",&client.acctNum);
		}
	}
	fclose(cfPtr);
}
