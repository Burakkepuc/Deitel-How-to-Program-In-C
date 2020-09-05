#include <stdio.h>



int main() {

    //printf("%s" ,"Welcome ");

     int integer1,integer2,sum;

     printf("1. sayıyı giriniz: ");
     scanf("%d",&integer1);

     printf("2. sayıyı giriniz: ");
     scanf("%d",&integer2);

     sum = integer1 + integer2;

     printf("Sum is %d",sum);

    int num1,num2;

    printf("Enter two integers, and i will tell you\n");
    printf("the relationship they satisfy: ");

    scanf("%d%d",&num1,&num2);

      if (num1 == num2){
        printf("%d equal to %d\n",num1,num2);
      }//End of the if

      if (num1 != num2){
          printf("%d not equal to %d\n",num1,num2);
      }//End of if

      if (num1 < num2){
          printf("%d less than %d\n",num1,num2);
      }//End of if

      if (num1 > num2){
          printf("%d greater than %d\n",num1,num2);
      }//End of if

      if(num1 <= num2){
          printf("%d less than or equal to %d\n",num1,num2);
      }//End of if

      if (num1 >= num2){
          printf("%d greater than or equal to %d\n",num1,num2);
      }//End of if*/



     int a;
     //int thisVariable,q76345,number;
     printf("Bir tamsayi giriniz: ");
     scanf("%d",&a);

     if(a != 7){
         printf("%d degiskeni 7'ye esit degildir. ",a);
     }

    //printf("This\tis\ta\tC\tProgram ");

    int x,y,z,result,_under_bar,3g;
    printf("Enter x,y and z respectively: ");
    scanf("%d%d%d",&x,&y,&z);

    result = x*y*z;
    printf("result: %d",result);*/

     int number1,number2;
     printf("Enter two integers: ");
     scanf("%d%d",&number1,&number2);

     printf("Sum: %d \n",number1+number2);
     printf("Sub: %d \n",number1-number2);
     printf("Multiple: %d\n",number1*number2);
     printf("Divide: %d\n",number1/number2);
     printf("Remain: %d\n",number1%number2);*/

    //int a=1,b=2,c=3,d=4;
     printf("1 2 3 4\n");
     printf("%d %d %d %d\n",1,2,3,4);
     printf("1 ");
     printf("2 ");
     printf("3 ");
     printf("4 ");*/

    int a,b;
    scanf("%d%d",&a,&b);

    if(a == b)
        printf("%d is equal to %d",a,b);
    if (a > b)
        printf("%d is larger than %d",a,b);
    if (a < b)
        printf("%d is less than %d",a,b);
   */

int a,b,c;
 scanf("%d%d%d",&a,&b,&c);

 printf("sum is:%d\n",a+b+c);
 printf("average is:%d\n",(a+b+c)/3 );
 printf("product is:%d\n",a*b*c);

 if(a < b && a<c)
     printf("Smallest is:%d\n ",a);
 if (b < a && b<c )
     printf("Smallest is:%d \n",b);
 if (c < a && c < b)
     printf("Smallest is %d \n",c);

    if(a > b && a>c)
        printf("Largest is:%d \n",a);
    if (b > a && b>c )
        printf("Largest is:%d \n",b);
    if (c > a && c > b)
        printf("Largest is %d \n",c);


    float PI = 3.14159;
    float r,area,perimeter;

    printf("Cemberin yaricapini giriniz: ");
    scanf("%f",&r);


    perimeter = (2 * PI * r);
    area = PI * (r*r);


    printf("Area: %f\n",area);
    printf("Perimeter: %f",perimeter);*/

//"\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n
printf("*****************\n");
    printf("*\t\t*\n");
    printf("*\t\t*\n");
    printf("*\t\t*\n");
    printf("*\t\t*\n");
    printf("*\t\t*\n");
    printf("*\t\t*\n");
    printf("*\t\t*\n");
printf("*****************");*/


printf("\t\t***\t\t\n");
printf("           *           *\n");
    printf("\t*\t\t*\n");
    printf("\t*\t\t*\n");
    printf("\t*\t\t*\n");
    printf("\t*\t\t*\n");
    printf("           *           *\n");
    printf("\t\t***\t\t\n");


printf("  * \n"
               " ***\n"
               "*****\n"
               "  * \n"
               "  * \n"
               "  * \n"
               "  * \n"
               "  * \n");

        int x,y,z;
        printf("Sirasiyla 3 tamsayi giriniz: ");
        scanf("%d%d%d",&x,&y,&z);

        if(x > y && x > z )
            printf("En buyuk %d \n",x);
        if (y > z && y > x)
            printf("En buyuk %d \n",y);
        if (z > x && z > y)
            printf("En buyuk %d \n",z);

    if(x < y && x < z )
        printf("En kucuk %d ",x);
    if (y < z && y < x)
        printf("En kucuk %d",y);
    if (z < x && z < y)
        printf("En kucuk %d",z);


    int x;
    scanf("%d",&x);

    if(x % 2 == 0)
        printf("%d cifttir",x);
    if (x % 2 ==1)
        printf("%d tektir ",x);
 

       //x'in y'nin katı olup olmadığını bulan program
        int x,y;
        scanf("%d%d",&x,&y);

        if(y % x  == 0 )
            printf("%d %d'nin katidir. ",x,y);

    if(y % x != 0 )
        printf("%d %d'nin kati degildir. ",x,y);


        printf("%d",' ');

       int x,x1,x2;
       scanf("%d",&x);

       x1 = x / 1000 ;
       printf("%d",x1);

        printf("Number\tsquare\tcube\n");
        printf("%d\t %d\t %d\t \n" ,1 , 1*1 , 1*1*1);
        printf("%d\t %d\t %d\t \n" ,2 , 2*2 , 2*2*2);
        printf("%d\t %d\t %d\t \n" ,3 , 3*3 , 3*3*3);
        printf("%d\t %d\t %d\t \n" ,4 , 4*4 , 4*4*4);
        printf("%d\t %d\t %d\t \n" ,5 , 5*5 , 5*5*5);
        printf("%d\t %d\t %d\t \n" ,6 , 6*6 , 6*6*6);
        printf("%d\t %d\t %d\t \n" ,7 , 7*7 , 7*7*7);
        printf("%d\t %d\t %d\t \n" ,8 , 8*8 , 8*8*8);
        printf("%d\t %d\t %d\t \n" ,9 , 9*9 , 9*9*9);
        printf("%d\t %d\t %d\t \n" ,10 , 10*10 , 10*10*10);*/

      int x = 412;


        x = x % 10;
        x = x/10 ;
        printf("%d", x);

      int number; //number input by user;
      int temp; //temporary integer;

      printf("Enter five digits number: ");
      scanf("%d",&number);

      printf("%d   ",number / 10000);
      temp = number % 10000;

      printf("%d   ",temp / 1000);
      temp = temp % 1000;

      printf("%d   ",temp / 100);
      temp = temp % 100;

      printf("%d   ",temp / 10);
      temp = temp % 10;

      printf("%d\n", temp);


}


