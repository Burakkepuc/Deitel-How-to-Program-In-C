#include <stdio.h>
#define SIZE 10

	void bubble(int work[], int size,int(*compare)(int a,int b) );
	int ascending(int a,int b);
	int descending(int a,int b);

int main(){
	int order;
	int counter;
	
	int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
	
	printf("Enter 1 to sort in ascending order,\n"
	"Enter 2 to sort in descending order: ");
	
	scanf("%d",&order);
	
	puts("\nData items in original order");
	
	//output original array
	for(counter = 0; counter < SIZE; ++counter){
		printf("%3d ",a[counter]);
	}
	
	if(order == 1){
		bubble(a,SIZE,ascending);
		puts("\nData items in ascending order");
	}
	else{
		bubble(a,SIZE,descending);
		puts("\nData items in descending order");
	}
	
	for( counter = 0; counter <= SIZE ; counter++){
		printf("%3d",counter[a]);
	}
}


void bubble(int work[], int size,int (*compare)(int a,int b)){
	int pass,count;
	
	void swap(int *element1Ptr,int *element2Ptr);//prototype
	
	for(pass = 1; pass < size; ++pass){
		for(count = 0; count < size - 1;++count){
			//Bitiþik elemeanlar sýralamaya uymuyorsa yerlerini deðiþtir.
			if((*compare)(work[count], work[count + 1])){
				swap(&work[count], &work[count +1]);
			}
		}
	}
}

void swap(int *element1Ptr, int *element2Ptr){
	
	int hold;
	
	hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}

int ascending(int a,int b){
	return b<a;
}

int descending(int a,int b){
	return b > a;
}
