#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <math.h>


    //Dice roll problem

   /* int i;

    forf (i = 1; i <= 20 ; ++i) {
        printf("%10d", (rand() % 6 ) + 1);

        if (i % 5 == 0){
            puts("");
        }
    }

   // 6.000.000 times dice roll

   int frequency1 = 0,frequency2 = 0,frequency3 = 0,frequency4 = 0,frequency5 = 0,frequency6 = 0;
   int roll; // atış sayacı 1'den 6000000'e
   int face; // zarın 1 atışı from 1 to 6


   //turn 6000000 and brief the results
    for (roll = 1; roll <= 6000000 ; ++roll) {//From 1 to 6000000
        face = rand() % 6 + 1; // from 1 to 6

        //determine the value and increase that.
        switch (face) {
            case 1:
                frequency1++;
                 break;
            case 2:
                frequency2++;
                break;
            case 3:
                frequency3++;
                break;
            case 4:
                frequency4++;
                break;
            case 5:
                frequency5++;
                break;
            case 6:
                frequency6++;
                break;
        }//end of switch
    }// end of for
    printf("Face \t Frequency\n");
    printf("%d \t %d\n",1,frequency1);
    printf("%d \t %d\n",2,frequency2);
    printf("%d \t %d\n",3,frequency3);
    printf("%d \t %d\n",4,frequency4);
    printf("%d \t %d\n",5,frequency5);
    printf("%d \t %d\n",6,frequency6);




    //Craps

    enum Status{
            CONTINUE,
            WON,
            LOST
    }; //enum status represent the game status.

    int rollDice(void);

    int main(){
       int sum; //sum of rolled dice.
       int myPoint; //point earned

       enum Status gameStatus; //Can contain CONTUNUE , WON , STATUS

       srand(time(NULL));/* randomize random number generator using current time

        sum = rollDice(); /* first roll of the dice

        switch (sum) {

            /* win on first roll
            case 7:
            case 11:
                gameStatus = WON;
                break;

            case 2:
            case 3:
            case 12:
                gameStatus = LOST; //House win
                break;

            default:
                gameStatus = CONTINUE;
                myPoint = sum;
                printf("Point is %d\n",myPoint);
                break;
        }

        /* while game not complete
        while (gameStatus == CONTINUE ){
            sum = rollDice(); /*roll dice again */


            /* determine game status
            if (sum == myPoint){ /* win by making point
                gameStatus = WON;  /* game over, player won
            }
            else{
                if (7 == sum)  /* lose by rolling 7
                    gameStatus = LOST;
            }
        }
            if (gameStatus == WON){
                puts("Player wins");
            } else
                puts("Player loses");



    }

    int rollDice(void){
        int dice1,dice2;
        int workSum;

        dice1 = 1 + rand() % 6; // make dice1
        dice2 = rand() % 6 + 1; //make dice2

        workSum = dice1 + dice2; // sum die1 and die2

        printf("Player rolled %d + %d = %d\n", dice1,dice2,workSum);
        return workSum;
    }

            void useLocal(void );
            void useStaticLocal(void );
            void useGlobal(void );

            int x = 1;

            int main(){
                int x = 5;

                printf("Local x in outer scope of main is %d\n",x);

                {
                    int x = 7;
                    printf("Local x in inner scope of main is %d\n",x);

                }
                printf("Local x in outer scope of main is %d\n",x);

                useLocal();
                useStaticLocal();
                useGlobal();
                useLocal();
                useStaticLocal();
                useGlobal();

                printf("\nlocal x in main is %d\n",x);
            }

            void useLocal(){
                int x = 25;
                printf("\nlocal  x in useLocal is %d after entering useLocal\n",x);
                ++x;
                printf("\nlocal  x in useLocal is %d before exiting useLocal\n",x);
            }

            void useStaticLocal(void ){
                static int x = 50; //Static x doesn't equal first value, starting from where it left
                printf("\nlocal static x is %d on entering useStaticLocal\n",x);
                ++x;
                printf("local static x is %d on exiting useStaticLocal\n",x);
            }
            void useGlobal(void ){
                printf("\nglobal x is %d on entering useGlobal\n",x);
                x*=10;
                printf("global x is %d on exiting useGlobal\n",x);

            }

            //Recursion Factorial

           long  factorial(long number);

            int main(){
             int i = 5; //counter

                // loop 11 times; during each iteration, calculate
                //13 factorial( i ) and display result


                    printf("%d! = %ld\n",i,factorial(i));


            }
            long  factorial(long number){
               if (number <= 1)
                   return 1;
               else
                   return number * factorial(number - 1);

            }

        //fibonacci
        long fibonacci(long n);

        int main(){
            long result; //fibonacci value
            long number; //number input by user

            printf("Enter an integer: ");
            scanf("%ld",&number);

            result = fibonacci(number);

            printf("Fibonacci(%ld)",result);
        }
        long fibonacci (long n){
            if (n == 0 || n == 1){
                return n;
            }
            else
                return fibonacci(n - 1) + fibonacci(n-2);
        }


            //5.8
           int main(){
               float x;

               x = fabs( 7.5 );
               printf("fabs: %.2f\n",x);
                x = floor( 7.5 );
                printf("floor: %.2f\n",x);
                x = fabs( 0.0 );
                printf("fabs: %.2f\n",x);
                x = ceil( 0.0 );
                printf("ceil: %.2f\n",x);
                x = fabs( -6.4 );
                printf("fabs: %f\n",x);
                x = ceil( -6/4 );
                printf("ceil: %.2f\n",x);
                x = ceil( -fabs(-8 + floor(-5.5)) );
                printf("ceil: %.2f\n",x);

           }

            float calculateCharges(float hours);

            int main(){
                float customer1,customer2,customer3;
                float hours1,hours2,hours3;

                printf("Enter hours for customer1: ");
                scanf("%f",&hours1);

                customer1 = calculateCharges(hours1);


                printf("Enter hours for customer2: ");
                scanf("%f",&hours2);

                customer2 = calculateCharges(hours2);


                printf("Enter hours for customer3: ");
                scanf("%f",&hours3);

                customer3 = calculateCharges(hours3);

                printf("Customer\tHours\tCharge\n");
                printf(" 1\t\t%2.f\t%.2f\n",hours1,customer1);
                printf(" 2\t\t%2.f\t%.2f\n",hours2,customer2);
                printf(" 3\t\t%2.f\t%.2f\n",hours3,customer3);

            }

            float calculateCharges(float hours){
                if (hours <= 3){
                    return 2.0;
                }
                else if(hours <= 23){
                    return ((hours - 3.0) * 0.50) + 2.0;
                }
                else
                    return 10.0;
            }


            int main(){
                float x,y;

                for (int i = 1; i < 5 ; ++i) {

                    printf("Sayiyi giriniz: ");
                    scanf("%f",&x);

                    y = floor(x + .5 );

                    printf("%.1f\t%.1f\n",x,y);
                }

            }

            //ROUNDING NUMBERS
            float roundToInteger(float number);
            float roundToTenths(float number);
            float roundToHundreths(float number);
            float roundToThousandths(float number);

            int main(){
                float number;

                printf("Enter number: ");
                scanf("%f",&number);

                printf("Round number to Integer is: %f\n",roundToInteger(number));
                printf("Round number to Tenths is: %f\n",roundToTenths(number));
                printf("Round number to Hundreths is: %f\n",roundToHundreths(number));
                printf("Round number to Thousantdths is: %f\n",roundToThousandths(number));
            }

            float roundToInteger(float number){
                return floor(number + .5);
            }

            float roundToTenths(float number){
                return floor(number * 10 + .5) / 10;
            }

            float roundToHundreths(float number){
                return floor(number * 100 + .5) / 100;
            }

            float roundToThousandths(float number){
                return floor(number * 1000 + .5) / 1000;
            }

            //Choose random number to determine sets and write it.

            int main(){
                srand(time(NULL));
                printf("%d\n",(1 + rand() % 5 ) * 2 );
                printf("%d",((1 + rand() % 5)  * 2) + 1);
                printf("%d",(1 + rand()  % 5) * 4 + 2 );
            }

             //Hypotenuse Function.

            double hypotenuse(double side1, double side2);

            int main(){
                double one,two,three,four,five,six,a,b,c;

                scanf("%lf%lf",&one,&two);
                a = hypotenuse(one, two); // Calculate 2 value hipotenus and send it to a.

                scanf("%lf%lf",&three,&four);
                b = hypotenuse(three, four);

                scanf("%lf%lf",&five,&six);
                c = hypotenuse(five, six);



                printf("Ucgen\t1.Side\t2.Side\t3.Side\n");
                printf("1\t%2.1f\t%.1f\t%.1f\n",one,two,a);
                printf("1\t%2.1f\t%.1f\t%.1f\n",three,four,b);
                printf("1\t%2.1f\t%.1f\t%.1f\n",five,six,c);



            }

            double hypotenuse(double side1, double side2){

                return sqrt(pow(side1,2) + pow(side2,2));

            }

            //Base Exponent

            int integerPower(int base , int exponent);

            int main(){
                int base,exponent,result;
                printf("Enter your base after exponent: ");
                scanf("%d%d",&base,&exponent);

                result = integerPower(base,exponent);
                printf("Result is: %d",result);
            }

            int integerPower(int base , int exponent){
                int result = 1;
                for (int i = 1; i <= exponent ; ++i) {
                    result *= base;
                }
                return result;
            }

            int multiple(int number1,int number2);

            int main(){
                int no1,no2,result;
                printf("Enter no1 and no2: ");
                scanf("%d%d",&no1,&no2);

                printf("%d",multiple(no1,no2));

            }

        int multiple(int number1,int number2){
                if (number1 % number2 == 0)
                    return 1;
                else
                    return 0;
            }

                //Odd or Even function
            int isEven(int x);

            int main(){
                    int number1,number2,number3,result1,result2,result3;

                    printf("Enter number1: ");
                    scanf("%d",&number1);
                     printf("Enter number2: ");
                     scanf("%d",&number2);
                     printf("Enter number3: ");
                      scanf("%d",&number3);

                      result1 = isEven(number1);
                      result2 = isEven(number2);
                      result3 = isEven(number3);

                      printf("\nNumber1\t%d\n",result1);
                      printf("Number2\t%d\n",result2);
                      printf("Number3\t%d\n",result3);
            }

            int isEven(int x){
                if (x % 2 == 0){
                    return 1;
                } else
                    return 0;
            }

            void makeAsteriks(int rowColumn);
            int main(){
                int number;

                scanf("%d",&number);

                makeAsteriks(number);
            }

            void makeAsteriks(int rowColumn){
                for (int i = 1; i <= rowColumn ; ++i) {
                    for (int j = 1; j <=rowColumn ; ++j) {
                        printf("#");
                    }
                    puts(" ");
                }
            }

            void fillCharacter(int rowColumn,char character);
            int main(){
                int number;
                char character;

                scanf("%d %c",&number,&character);

                fillCharacter(number,character);
            }

            void fillCharacter(int rowColumn,char character){
                for (int i = 1; i <= rowColumn ; ++i) {
                    for (int j = 1; j <=rowColumn ; ++j) {
                        printf("%c",character);
                    }
                    puts(" ");
                }
            }




            int quotient(int,int);
            int remainderr(int,int);

        int main(){
            int number,division = 10000;

            printf("Enter number: ");
            scanf("%d",&number);

            while (number >= 10){
                if (number >= division){
                    printf("%d  ",quotient(number,division));
                    number = remainderr(number,division);
                    division = quotient(division,10);
                } else{
                    division = quotient(division,10);
                }

            }
            printf("%d  ",number);
        }

            int quotient(int a,int b){
                return a / b;
            }

            int remainderr(int a,int b){
                return a % b;
            }

          //CalculateTime
            int calculateTime(int saat, int dakika,int saniye);
            int main(){
                int saat,dakika,saniye,gecenSure;

                printf("Saati giriniz    :");
                scanf("%d", &saat);
                printf("\nDakikayi giriniz :");
                scanf("%d", &dakika);
                printf("\nSaniyeyi giriniz :");
                scanf("%d", &saniye);

                gecenSure = calculateTime(saat,dakika,saniye);

                printf("saat 12'den %d saniye gecmistir.",gecenSure);

            }

            int calculateTime(int saat, int dakika,int saniye){
                return saat*3600 + dakika * 60 + saniye;
            }


            //Fahrenheit-Celcius-Santigrat

            float fahrenheithToC(float );
            float celciusToFahrenheith(float );
            int main(){
                float temperature;
                // printf("Enter temp: ");
                //scanf("%f",&temperature);

                printf("Celcius\tFahrenheith\n");
                for(int i = 0; i <= 100 ; ++i) {
                    printf("%dC\t%.2f\n",i,celciusToFahrenheith(i));
                }

                //printf("Celcius is: %.2f \n",fahrenheithToC(temperature));
                //printf("Fahrenheith is: %.2f ",celciusToFahrenheith(temperature));

            }

            float fahrenheithToC(float fahrenheith){
                float celcius1;
                celcius1 = ((fahrenheith - 32 ) * 5) / 9;
                return  celcius1;
            }

            float celciusToFahrenheith(float celcius){
                float fahrenheith;

                fahrenheith = (celcius * 1.800 )+ 32.00;
                return fahrenheith;
            }


            int minimum(int,int,int);
            int main(){
                int a,b,c,min;
                printf("Enter 3 numbers: ");
                scanf("%d%d%d",&a,&b,&c);

               min = minimum(a,b,c);

               printf("Min: %d",min);
            }

            int minimum(int a,int b,int c){

                int min = a;

                if ( b < min && b < c )
                    return b;

                if (c < min )
                    return c;

                else
                    return a;
            }

            int isPerfect(int);
            int main(){

                for (int i = 2; i <= 1000 ; ++i) {
                    if (isPerfect(i) == 1)
                        printf("%d mukemmel sayidir.\n",i);
                }
            }

            int isPerfect(int number){
                int addition = 1;
                for (int i = 2; i<=number / 2 ; ++i) {

                    if (number % i == 0)
                        addition += i;
                }
                if (addition == number)
                return 1;
                else
                    return 0;
            }


            int asalMi(int);
            int main(){
                int number,asalSayimi;
               // scanf("%d",&number);

          //asalSayimi = asalMi(number);

                for (int i = 1; i <= 100 ; ++i) {
                    asalSayimi = asalMi(i);

                    if (asalSayimi == 0){
                        printf("%d\n",i);

                      }
                    }
                }



            int asalMi(int number){
                int flag = 0;

                for (int i = 2; i <= number / 2 ; ++i) {
                    if (number % i == 0){
                        flag = 1; //Flag 1 ise asal.
                        break;
                    }

                }

                if (flag == 1){
                    return 1;
                } else
                    return 0;

            }
            int quotient(int,int);
            int remainderr(int,int);
            int reverseNumb(int);
            int main(){
                int number;

                scanf("%d",&number);

                printf("%d\n",number);
                printf("%d",reverseNumb(number));
            }

            int reverseNumb(int number){
               int reverse = 0;

               while (number != 0)
               {
                  reverse = reverse * 10 +  remainderr(number,10);
                  number = quotient(number,10);
               }

                return reverse;

            }

            int quotient(int a,int b){
                return a / b;
            }
            int remainderr(int a,int b){
                return a % b;
            }

            int qualityPoints(int,int ,int );
            int main(){
                int ogrenci1,ogrenci2,ogrenci3,ort;

                scanf("%d%d%d",&ogrenci1,&ogrenci2,&ogrenci3);
               ort = qualityPoints( ogrenci1, ogrenci2, ogrenci3);

                printf("%d",ort);


            }

            int qualityPoints(int og1,int og2,int og3){
                int ort;

                ort = (og1 + og2 + og3) / 3;

                if(ort>=90)
                    return 4;
                else if(ort>=80)
                    return 3;
                else if(ort>=70)
                    return 2;
                else if(ort>=60)
                    return 1;
                else
                    return 0;
            }


            int findGreatest(int,int);
            int main(){
                int gcd,num1,num2;

                scanf("%d%d",&num1,&num2);
                gcd = findGreatest(num1,num2);

                printf("Gdc: %d", gcd);
            }

            int findGreatest(int num1,int num2){
                int gcd = 0;

                for (int i = 1; i <= num1 && i <= num2 ; ++i) {
                    if (num1 % i == 0 && num2 % i == 0){
                        gcd = i;
                    }
                }

                return gcd;
            }

            int flip();
            int main(){


                for (int i = 1; i <= 100 ; ++i) {
                    if (flip() == 1)
                        printf("%d tura\n",flip());
                    else
                        printf("%d yazi\n",flip());
                }



            }

            int flip(){
                int coin;

                    coin =  rand() % 2;

                    if (coin == 1)
                        return 1;
                    else
                        return 0;



            }

            //int findNumber(int,int);
            int main(){
                srand(time(NULL));
                int number,randomNumber;
                randomNumber = 1 + rand() % 1000;

                printf("I have a number between 1 and 1000\n");
                printf("Can you guess my number?: \n");
                scanf("%d",&number);

                while (number != randomNumber){

                     if (number < randomNumber)
                        printf("Too low\n");
                    else if (number > randomNumber)
                        printf("Too high\n");
                    else
                         printf("\n\nExcellent, You guessed the number!");

                    printf("I have a number between 1 and 1000\n");
                    printf("Can you guess my number?: \n");
                    scanf("%d",&number);
                }

            }
            int fibonacci(int);
            int main(){
                int number,greatest;
                printf("How many fibonacci number addition? ");
                scanf("%d",&number);
                greatest = fibonacci(number);

                printf("Bigger is: %d",greatest);
            }

            int fibonacci(int n){
                int a = 0,b = 1,nextTerm;
                for (int i = 1; i <=n ; ++i) {
                    nextTerm = a + b;
                    b = a;
                    a = nextTerm;

                    printf("\n%d ",nextTerm);
                }

                return nextTerm;
            }

            float distance1(float ,float ,float ,float );
            int main(){
                float x1,x2,y1,y2,distance;
                printf("Enter x1 and x2: ");
                scanf("%f%f",&x1,&x2);

                printf("Enter y1 and y2: ");
                scanf("%f%f",&y1,&y2);

                distance = distance1(x1,x2,y1,y2);
                printf("Distance is %.2f",distance);
            }

            float distance1(float x1,float x2,float y1,float y2){

                return sqrt(pow(x2 - x1 ,2) + pow(y2-y1,2));
            }*/

            int mystery(int a,int b );
            int main(){
                int x,y;

                scanf("%d%d",&x,&y);

                printf("The result is: %d",mystery(x,y));
            }

            int mystery(int a,int b ){
            if (1 == b)
                return a;
            else
                return  a + mystery(a,b-1);
            }
