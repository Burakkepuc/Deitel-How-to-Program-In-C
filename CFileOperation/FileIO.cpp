#include <stdio.h>

int main(){
	
	FILE *oku,*yaz;
	int b = 5;
	
	yaz = fopen("testdata","w");
	fprintf(yaz,"%d",b);	
	fclose(yaz);
	
	oku = fopen("testdata","r");
	fscanf(oku,"%d",&b);
	printf("%d",b);
}
