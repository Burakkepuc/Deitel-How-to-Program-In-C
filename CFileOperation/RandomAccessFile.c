#include <stdio.h>

 struct clientData{
	int acctNumb;
	char lastName[15];
	char firstName[10];
	double balance;
};

int main(){
	int i;
	struct clientData blankClient ={0,"","",0.0};
	
	FILE *cfPtr;
	if((cfPtr = fopen("credit.txt","wb")) == NULL){
		printf("File doesn't existed. '");
	}
	else {
		for(i = 1; i<= 100; i++){
			fwrite(&blankClient,sizeof(struct clientData),1,cfPtr);
		}
	}
	fclose(cfPtr);
}
