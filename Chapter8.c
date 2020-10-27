#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 80
#define SIZE1 25
#define SIZE2 15
    void reverse(const char *const sPtr);


int main() {

    /*
    //Function strol
   const char *string = "51.2% are admitted"; //Initialize string

   double d;//variable to hold converted sequence
   char *stringPtr;

   d = strtod(string,&stringPtr);

   printf("The string \"%s\" is converted to the\n",string);
   printf("double value %.2f and the string \"%s""\n",d,stringPtr);


    char sentence[SIZE];
    puts("Enter a line of text");

    //bir satır metin okumak için fgets kullanımı.
    fgets(sentence,SIZE,stdin);

    puts("\nThe line printed backward is: ");
    reverse(sentence);

     }

     void reverse(const char * const sPtr){
    if('\0' == sPtr[0]){ //karakter dizini sonu ise
        return;
    } else{
        reverse(&sPtr[1]); //Özyineleme
        putchar(sPtr[0]);//Putchar ile karakter görüntüleme
    }

    int c;//variable to hold character input by user
    char sentence[SIZE]; //create char array
    int i = 0; //counter

    puts("Enter a line of text: ");

    //use getchar to read each character
    while (i < SIZE - 1 &&(c = getchar() ) != '\n'){
        sentence[i++] = c;
    }
    sentence[i] = '\0'; //terminate string

    puts("The line entered was:");
    puts(sentence);

     //STRCPY
    char x[] = "Happy Birthday to You";
    char y[SIZE1];
    char z[SIZE2];

    //Copy contents of x into y
    printf("The string in array x is: %s \n",x);
    printf("The string in array y is: %s\n",strcpy(y,x));

    //Copy first 14 characters of x into x.Doesn't copy null character
    strncpy(z,x,SIZE2 - 1);

    z[SIZE2 - 1] = '\0'; //terminate string z
    printf("The string in array z is %s",z);

    //STRCON
    char s1[20] = "Happy ";
    char s2[] = "New Year ";
    char s3[ 40 ] = ""; //initialize char array s3 to empty

    //concreate s2 to s1
    printf("s1 = %s\ns2 = %s\n",s1,s2);

    printf("strcat(s1,s2) = %s\n",strcat(s1,s2));

    //concatenate first 6 characters of s1 to s3. Place '\0'
    //after last character
    printf("strncat(s3,s1,6) = %s\n",strncat(s3,s1,6));

    //concatenate s1 to s3
    printf("strcat(s3,s1) = %s\n",strcat(s3,s1));*/


    const char *s1 = "Happy new year";
    const char *s2 = "Happy new year";
    const char *s3 = "Happy holidays";

    printf("s1 - %s", s1, "s2 = %s ",s2,"s3 = %s" ,s3);
    printf("\nstrcmp(s1, s2) = %d\n",strcmp(s1,s2));
    printf("strcmp(s1, s3) = %d \n",strcmp(s1,s3));
    printf("strcmp(s3, s1) = %d\n",strcmp(s3,s1));

    //STRCHR => Search a character in a string.
    //STRCSPN => Determines the lenght of the initial part of the string in
}