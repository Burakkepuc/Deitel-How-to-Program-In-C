#include <stdio.h>
#include <ctype.h>

#define ARRAY_SIZE 4
#define SIZE 10

    void cubeByReference(int *nPtr);
    void convertToUppercase(char *sPtr);

    void bubleSort(int *const array,int size);
    int getSize(float *ptr);
        void copy1(char *s1,char *s2);
        void copy2(char *s1,char *s2);

            void function1(int);
            void function2(int);
            void function3(int);
int main() {
 /*  int a;
   int *aPtr;

   a = 7;
   aPtr = &a;

   printf("The address of a is %p"
          "\nThe value of aPtr is %p",&a,aPtr);

   // The value of aPtr is the address of a

  printf("\n\nThe value of a is %d"
         "\nThe value of *aPtr is %d",a,*aPtr);

   printf("\n\nShowing that * and & are complements of "
          "each other\n&*aPtr = %p"
          "\n*&aPtr = %p\n",&*aPtr,*&aPtr);

 int number = 5;
 printf("The original value of number is %d",number);

 cubeByReference(&number); //Send with unpersant(&) to the function.
 printf("\nThe new value of number is %d\n");

 char string[] = "cHaRaCtErs and $32.98";

     printf("The string before conversion is : %s\n",string);
     convertToUppercase(string);
    printf("The string after conversion is : %s",string);
}

void convertToUppercase(char *sPtr){
    while(*sPtr != 0){
        *sPtr = toupper(*sPtr),
        ++sPtr;
    }
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
    int i;

    printf("Data items in original order\n");

    for (i = 0; i < SIZE ; ++i) {
        printf("%4d",a[i]);
    }

    bubleSort(a,SIZE);

    puts("\nData items in ascending order");

    for (i = 0; i < SIZE ; ++i) {
        printf("%4d",a[i]);
    }

 float array[SIZE];
 printf("The number of bytes in the array is %u"
        "\nThe number of bytes returned by getSize is %u\n",
        sizeof(array),getSize(array));x
 //b[3] == *(bPtr + 3);

    int b[] = {10,20,30,40};
    int *bPtr =  b; //create bPtr and point it to array b
    int i,offset; //counters

    printf("Array b printed with:\nArray subscript notation\n");


    for (i = 0; i < ARRAY_SIZE ; ++i) {
        printf("b[%d] = %d\n",i,b[i]);
    }

    printf("\nPointer/offset notation where\n"
           "the pointer is the array name\n");

    for (offset = 0; offset <ARRAY_SIZE ; ++offset) {
        printf("*(b + %d) = %d\n",offset,*(b + offset));
    }

    printf("\nPointer subscript notation\n");
    for (i = 0; i < ARRAY_SIZE ; ++i) {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    }

        printf("\nPointer/offset notation \n");

        for (offset = 0; offset < ARRAY_SIZE ; ++offset) {
            printf("*( bPtr + %d ) = %d\n",offset,*(bPtr + offset));
        }
        char string1[SIZE];
        char *string2 = "Hello";
        char string3[SIZE];
        char string4[] = "Good Bye";

        copy1(string1,string2);
        printf("string1 = %s\n",string1);
        copy2(string3,string4);
        printf("string3 = %s\n",string3);
*/
    //Initialize array of 3 pointers to functions that each take an int argument and return void
    void (*f[3])(int) = {function1,function2,function3};
    int choice;

    printf("Enter a number between 0 and 2,3 to end:  ");
    scanf("%d",&choice);

    while (choice >= 0 && choice < 3){
        //Invoke function at location choice in array f and pass choice as an argument
        (*f[choice])(choice);

        printf("Enter a number between 0 and 2,3 to end: ");
        scanf("%d",&choice);
    }
    puts("Program execution completed.");

    }
    void function1(int a){
    printf("You entered %d so function 1 was called\n",a);
    }

    void function2(int b){
        printf("You entered %d so function 2 was called\n",b);
    }

    void function3(int c){
        printf("You entered %d so function 3 was called\n",c);
    }

void copy1(char s1[],char s2[]){
    int i;
        for (i = 0; (s1[i] = s2[i] ) != '\0'  ; ++i) {

        }
}
    void copy2(char *s1,char *s2){
        for (; (*s1 = *s2) != '\0' ; s1++,s2++) {

        }
}

int getSize(float *ptr){
    return sizeof(*ptr);
}

void bubleSort(int *const array, int size){
    void swap(int *element1Ptr,int *element2Ptr);
    int pass;
    int j;

    for (pass = 0; pass < size - 1 ; ++pass) {
        for (j = 0; j < size - 1 ; ++j) {

            if (array[j] > array[j+1]){
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void swap(int *element1Ptr, int *element2Ptr){
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

void cubeByReference(int *nPtr){ //Take with asteriks(*)
    *nPtr = *nPtr * *nPtr * *nPtr; //Compute with asteriks(*)
}