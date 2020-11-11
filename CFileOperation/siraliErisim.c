#include <stdio.h>


int main(){
	int hesap;
	char name[30];
	double balance;
	
	
	FILE *cfPtr;//File pointer
	
	if((cfPtr = fopen("clients.txt","w")) == NULL){ //Eger dosya acilmamis ise
		printf("Dosya acilamadi. ");
	}
	else{
		puts("Hesap, ad ve bakiye giriniz. ");
		puts("Giris islemini sonlandirmak icin EOF giriniz.");
		printf("? ");
		scanf("%d%s%lf",&hesap,name,&balance); //Klavyeden degerleri oku
		
	}
	
	//fprintf ile dosya icine hesap,isim ve bakiye degeri yazmak
	while(!feof(stdin)){//Dosyayý eof ile klavyeden sonlandirana kadar oku
		fprintf(cfPtr, "%d %s %.2f\n",hesap,name,balance); // Dosyanýn icine yaz
		printf("? ");
		scanf("%s%29s%lf",&hesap,name,&balance);//Klavyeden oku
	}
	
	fclose(cfPtr);
}
