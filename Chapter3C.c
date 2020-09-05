#include <stdio.h>
#include <math.h>

    /*int toplam = 0;
    int sayac = 1;
    int not=0,ort;


    printf("Notu giriniz: ");
    while (sayac != -1){

        scanf("%d",&not);

        toplam = toplam + not;
        sayac++;
    }

    if (sayac == -1)
    ort = toplam/ sayac;
    printf("%d",ort);

    int toplam = 0;
    int sayac = 0;
    int not;
    float ortalama;


    printf("Notu giriniz(Cikmak icin -1): ");
    scanf("%d",&not);

    while(not != -1){
        toplam = toplam + not;
        sayac++;

        printf("Notu giriniz(Cikmak icin -1): ");
        scanf("%d",&not);
    }

    if(sayac != 0){
        ortalama = (float )toplam / sayac;
        printf("%.2f\n",ortalama);
    }
    else
        printf("Not girilmedi.");


    int gecenler = 0;
    int kalanlar = 0;
    int ogrenci = 1,result;


    while (ogrenci <= 10){
        printf("Gectiyse 1, Kaldiysa 2: ");
        scanf("%d",&result);

        if (result == 1)
            gecenler++;
        else
            kalanlar++;

            ogrenci++;

    }

    printf("Gecen kisi sayisi: %d\n",gecenler);

    if (gecenler >=8)
        printf("Bonus to instructor. ");






    int sum,x;
    x=1;
    sum=0;

    while (x <= 10){
        sum+=x;
        x++;
    }
    printf("%d",sum);


    int x,y;

    scanf("%d",&x);
    scanf("%d",&y);

    int i = 1;
    int prod = 1;


    while( i <= y){
        prod*=x;
        i++;
        printf("%d\n",prod);

    }



    int x = 1, total = 0,y;
    while (x <= 10){
        y = x * x;
        printf("%d\n",y);
        total += y;
        ++x;
    }
    printf("Toplam %d\n",total);


    int toplam = 0,sayac =0,sayi;

    scanf("%d",&sayi);

    while (sayi != -1){
        toplam += sayi;
        sayac++;

        scanf("%d",&sayi);

    }
    if (sayac != 0)
        printf("%d",toplam);
    else
        printf("Sayi girilmedi");


    int count = 0;
    float overallGallon,milesPerGallon, miles,gallons;

    printf("Enter the gallons used(-1 to end): ");
    scanf("%f",&gallons);


    while (gallons != -1 ){
        printf("Enter the miles driven:\n ");
        scanf("%f",&miles);


        milesPerGallon = miles / gallons;
        printf("%.2f",milesPerGallon);
        overallGallon = milesPerGallon + overallGallon;

        count+=1;


        printf("\nEnter the gallons used(-1 to end):\n ");
        scanf("%f",&gallons);
    }


    if (count != 0){
        printf("The overall average miles/gallon was %.4f\n",overallGallon / 3);
    } else
        printf("There is no result");


    int accountNumber,count = 0;
    float  beginningBlance,totalCharges,totalCredits,creditLimit,newBalance;

    printf("Enter account number: ");
    scanf("%d",&accountNumber);

    while (accountNumber != -1){
        printf("Enter beginning balance: ");
        scanf("%f",&beginningBlance);

        printf("Enter total charges: ");
        scanf("%f",&totalCharges);

        printf("Enter total credits: ");
        scanf("%f",&totalCredits);

        printf("Enter credit limit: ");
        scanf("%f",&creditLimit);

        printf("Account: %d\n",accountNumber);
        printf("Credit limit: %.2f\n",creditLimit);
        printf("Balance: %.2f\n",newBalance = beginningBlance+totalCharges-totalCredits);

        if (newBalance > creditLimit){
            printf("Credit limit exceeded\n");
        } else
            printf("Its your credit\n");

        count++;

        printf("Enter account number: ");
        scanf("%d",&accountNumber);
    }

    if (count != 0){
        printf("Kill processed");
    } else
        printf("No processed");



    int count = 0;
    float sales,totalSalary,takePay = 650;

    printf("Enter sales in dollars(-1 to end): ");
    scanf("%f",&sales);

    while (sales != -1){
        totalSalary = 200 + (sales * 0.09);
        printf("Salary is: %.2f\n ",totalSalary );

        count++;

        printf("Enter sales in dollars(-1 to end): ");
        scanf("%f",&sales);
    }

    if (count != 0){
        printf(" ");
    } else
        printf("There is nothing.");


    int count = 0;
    float anaPara,faizOrani,gunSayisi,faiz;

    printf("Ana parayi girin(bitirmek icin -1): ");
    scanf("%f",&anaPara);

    while (anaPara != -1){
        printf("Faiz oranini giriniz: ");
        scanf("%f",&faizOrani);

        printf("Kredi donemini giriniz: ");
        scanf("%f",&gunSayisi);

        faiz = anaPara * faizOrani * gunSayisi / 365;

        printf("Faiz miktari: %.2f\n",faiz);

        count++;

        printf("Ana parayi girin(bitirmek icin -1): ");
        scanf("%f",&anaPara);

    }

    if (count != 0){
        printf(" ");
    } else
        printf("Deger girilmedi. ");


    int sayac = 0;
    float calisanSaat,saatUcreti,maas,saat40,saat40plus;

    printf("Calisan saati girin(bitirmek icin -1): ");
    scanf("%f",&calisanSaat);

    while (calisanSaat != -1){
        printf("\nCalisan saati girin(bitirmek icin -1): ");
        scanf("%f",&calisanSaat);

        printf("Calisan saat ucreti girin: ");
        scanf("%f",&saatUcreti);

        if (calisanSaat <= 40){
            saat40 = calisanSaat * saatUcreti;
            printf("%.2f",saat40);
        } else{
            saat40plus = saat40 + (saatUcreti * 1.5);
            printf("%.2f",saat40plus);
        }

        sayac++;


    }

    if (sayac != 0){
        printf(" ");
    } else
        printf("Sonuc yok");


    int x = 5, y = 6;

    printf("%d\n",x);
    printf("%d\n",x++);
    printf("%d\n\n",x);

    printf("%d\n",y);
    printf("%d\n",++y);
    printf("%d\n",y);


    int count = 0,sayi,max = 0;


    printf("Sayi giriniz(cikmak icin -1): ");
    scanf("%d",&sayi);
    while (sayi != -1){

        if (sayi > max){
            max = sayi;
        }

        count++;

        printf("Sayi giriniz(cikmak icin -1): ");
        scanf("%d",&sayi);
    }

    if(count == 0){
        printf("Sayi girilmedi");
    } else
        printf("Maximum: %d",max);


    int n=1;

    printf("N\t10*N\t100*N\t1000*N\n\n");
    while (n <= 10){
    printf("%d\t%d\t%d\t%d\n",n,n*10,n*100,n*1000);
    n++;
    }

    int a = 3;

    printf("A\tA+2\tA+4\tA+6\n\n");
    while (a <= 15 ){
      printf("%d\t%d\t%d\t%d\n",a,a+2,a+4,a+6);
      a+=3;
    }

    int number = 0;

    while (scanf("%d",&number)){

        if (number == 1 || number == 2){
            printf("Login succesful ");
            break;
        }

    int count = 1;
    while (count <= 10){
        puts(count % 2  ? "****" : "+++++++");
        ++count;

    }

int  row = 10;
int column;

while (row >= 1){
    column = 1;

            while(column <= 10){
                printf("%s", row % 2 == 1 ? "<" : ">");
                column++;
            }
            row--;
            printf("\n");
}
    return 0;

    int x = 5, y = 8;

    if (x == 8){
        if (y == 5)
            puts("@@@@@");
    }
       else{
puts("#####");
   puts("$$$$$");
            puts("&&&&&&");
        }



    int a,row ,column;

    scanf("%d",&a);

    if (a >= 1 && a <= 20){
    row = 1;
    while (row <= a){
        column = 1;
        while (column <= a){
       if(row == 1 || row == 5 || column == 1 || column == 5){
       printf ("*");
       }
       else
       printf(" ");
            column++;
        }
        printf("\n");
        row++;
        }
    }

    int a,row ,column;

    scanf("%d",&a);

        row = 1;
        while (row <= a){
            column = 1;
            while (column <= a){
                if (row==1 || row==a || column==1 || column==a)
                    printf("*");
                else
                    printf("-");

                column++;
            }
            printf("\n");
            row++;
        }


    int n,reversedNumber,originalNumber,remained;

    scanf("%d", &n);

    originalNumber = n;

    while (n != 0){
        remained = n % 10;
        reversedNumber = (reversedNumber * 10) + remained;
        n = n / 10;
    }
    if ( originalNumber == reversedNumber){
        printf("Palindrome");
    } else
        printf("Palindrome Degil");


    int sayi = 1 ;

    while (sayi <= 100000){
        sayi++;
        printf("%d",sayi);
    }
     int ciftSayi = 0;

     while (1){
         ciftSayi++;
        if ( ciftSayi % 2 == 0){
            printf("%d\n",ciftSayi);
        };
     }


    int sayi,toplam = 0,kalan = 0,yeniSayi;

    printf("ikilik tabanda bir sayi giriniz: ");
    scanf("%d",&sayi);

    int nDigits = 0;


    while (sayi != 0){
        kalan = sayi % 10;
        yeniSayi= kalan * pow(2, nDigits);
        toplam = toplam + yeniSayi;
        sayi = sayi / 10;
        nDigits++;
    }
    printf("%d",toplam);

    int sayac = 0;
    float r;
    float pi = 3.14159,cevre,cap;

    printf("Yaricapi giriniz: ");
    scanf("%f",&r);

    while (r != -1){
    printf("Dairenin cevresi: %f \n", 2*pi*r);
    printf("Dairenin alani: %f\n", pi*r*r);

    sayac++;

        printf("Yaricapi giriniz: ");
        scanf("%f",&r);
    }

    if (sayac == 0){
        printf("Deger girilmedi.");
    }


    int sayi,remained,specialNumber = 0,n = 0;

    scanf("%d",&sayi);


   while (sayi != 0){
        remained = sayi % 10;
        if (remained == 7){
            specialNumber++;
        }

        sayi /= 10;

    }

    printf("%d kadar 7 sayisi vardir. ",specialNumber);



    int a,b,c,count = 0;

    scanf("%d",&a);


    while (a != -1){
        scanf("%d",&b);
        scanf("%d",&c);

    if ((a*a + b*b) == c*c){
        printf("Temsil eder.\n");
    } else
        printf("temsil edemez.\n");

    count++;

    scanf("%d",&a);
    }

    if (count == 0){
        printf("Deger girilmedi");
    }


    int row,column;

    row = 1;
        while(row <= 7){

            column = 1;
            while (column <= 8){

                printf("* ");
                column++;
            }
                puts("");
            row++;
                if (row % 2 == 0)
                    printf(" ");


        }

    int numb,fact = 1,num2;


    printf("Enter factorial: ");
    scanf("%d",&numb);

    num2 = numb;

    while (numb != 1){ //sart saglandigi surece dön
        fact = fact * numb;
        numb--;
    }
    printf(" %d fact: %d",num2,fact);

    long fact = 1,n = 0;
    double e = 1;
    while (n <= 30 ){
        n++;
        fact = fact * n;
        e = e + 1.0/fact;
    }
    printf("%f",e);*/


