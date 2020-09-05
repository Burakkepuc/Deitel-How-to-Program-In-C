#include <stdio.h>
#include <math.h>
#include <mem.h>

int main() {
    /* float p,r,a;
     int n;

     printf("Ana para: ");
     scanf("%f",&p);

     printf("Yillik faiz: ");
     scanf("%f",&r);

     printf("Yil sayisi: ");
     scanf("%f",&n);



     printf("Year\tAmountOfDeposit\n");
     for (int n = 1; n <= 10 ; n++) {
         a = p * pow(1.0 + r , n);

         printf("%d\t%.2f\n",n,a);
     }
    int grade;//Bir not
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    puts("Enter the letter grades");
    puts("Enter the EOF character to end input");

    //Kullanıcı dosya sonu anahtar dizini girene kadar dön.
    while ((grade = getchar()) != EOF){
        switch (grade) {
            case 'A':
            case 'a':
                aCount++;
                break;

            case 'B':
            case 'b':
                bCount++;
                break;

            case 'C':
            case 'c':
                cCount++;
                break;

            case 'D':
            case 'd':
                dCount++;
                break;

            case 'F':
            case 'f':
                fCount++;
                break;

            case '\n'://girilen yeni satırları
            case '\t'://sekmeleri
            case ' '://ve boşlukları göz ardı et
                break;//Switch'den çık.

            default:
                printf("Incorrect letter grades entered.");
                puts("Enter a new grade");
                break;
        }
    }

    printf("\nTotals for each letter grade are: ");
    printf("A: %u\n",aCount);
    printf("B: %u\n,",bCount);
    printf("C: %u\n",cCount);
    printf("D: %u\n",dCount);
    printf("F: %u\n",fCount);

    int counter = 1;
     do {
         printf("%d ",counter);
         counter++;
     }while (counter<=10);
    int x;

     for (x = 1; x <= 10; ++x) {
         if (x == 5)
             break;
         printf("%d",x);

     }
 printf("\nBroke out of loop at x == %d",x);



     for (int x = 0; x <= 10 ; ++x) {
         if (x == 5){
             continue;
         }
         printf("%d ",x);
     }
     printf("\nUsed continue to skip printing the value 5 ");


    int x = 1;
    while (x <= 20){
        printf("%d",x);
        if (x % 5 == 0){
            puts("");
        } else
            printf("\t");
        x++;
    }

     for (int i = 1; i <= 20 ; ++i) {
         printf("%d",i);

         if (i % 5 == 0){
             puts("");
         } else
             printf("\t");
     }

   int x,y,i,j;
   scanf("%d%d",&x,&y);

     for (int i = 1; i <= y ; ++i) {
         for (int j = 1; j <= x ; ++j) {
             printf("%s","@");
         }
         puts("");
     }

    int toplam = 0,sayi,n;

    printf("Kac adet sayi giriliecek? :");
    scanf("%d",&n);

     for (int i = 1; i <= n; ++i) {
         scanf("%d",&sayi);
         toplam += sayi;
     }

     printf("%d",toplam);

    int toplam = 0,sayi = 0,ort,sayac = 0;

    scanf("%d",&sayi);

     while (sayi != 999){
         toplam += sayi;
         sayac++;

         scanf("%d",&sayi);
     }

     if (sayac == 0){
         printf("no result");
     } else{
     ort = toplam / sayac;
     printf("%d",ort);
     }

    int sayi,n,enKucuk;

    scanf("%d",&n);

     for (int i = 1; i <= n ; ++i) {

         scanf("%d",&sayi);

         if (sayi < enKucuk){
             enKucuk = sayi;
         }
     }

     printf("En Kucuk : %d",enKucuk);


    int n,s1,s2;

    printf("How many Integer numbers: ");
    scanf("%d",&n); //Kac adet sayi girilecek ?


    if (n > 0){ //n o'dan büyükse
        printf("Enter the first number: ");
        scanf("%d",&s1);//s1'i gir
        n--;//n'i azalt

        if (n > 0){//n hala sıfırdan büyükse
            for (;n>=1;n--) {//1'e eşit olana kadar n i azalt.
                printf("Enter next number: ");
 5               scanf("%d",&s2);//s2'yi gir
                if (s1 > s2)//s1 s2'den büyükse
                    s1 = s2;//s2'yi s1'e ata.
            }
        }
    }
    printf("The smallest is: %d",s1);*/

/*
   int number1,number2,number3;

   printf("Sayiyi giriniz: ");
   scanf("%d",&number1);

    printf("Sayiyi giriniz: ");
    scanf("%d",&number2);

    printf("Sayiyi giriniz: ");
    scanf("%d",&number3);

    if (number1 < number2 && number1 < number3){
        printf("%d en kucuk",number1);
    }
    else if (number2 < number1 && number2 < number3)
        printf("%d en kucuk",number2);
    else
        printf("%d en kucuk",number3);

    int sayi1,sayi2,n;

    printf("Kac adet sayi girilecek: ");
    scanf("%d",&n);

    for (int i = 0; i < n ; ++i) {
        printf("ilk degeri giriniz: ");
        scanf("%d",&sayi1);

        n--;
        for (; i < n ; ++i) {
            printf("Diger degeri giriniz: ");
            scanf("%d",&sayi2);
            if (sayi2 < sayi1)
                sayi1 = sayi2;
        }
    }
    printf("smallest: %d",sayi1);

//Cift tam sayilarin toplami

    int toplam = 0;

    for (int j = 2; j <= 30; j+=2) {
        printf("%d\n",j);
        toplam += j;
    }
    printf("toplam: %d",toplam);

//Tek tam sayilarin carpimi.
    int carpim = 1;

    for (int i = 1; i < 15 ; i+=2 ) {
        carpim = carpim * i;
    }

    printf("%d",carpim);

 //Faktoriyel alma
    int sayi,faktorial = 1;

    printf("Faktoriyel alacak sayiyi giriniz: ");
    scanf("%d",&sayi);

    for (int i = sayi; i > 1 ; i--) {
        faktorial = faktorial * i;
    }
    printf("faktoriyel: %d",faktorial);

    //Çoklu Faiz programı



    double amount;
    double principal = 1000.00;
    double rate;
    int year;

    for (rate = .05; rate <= 0.1 ; rate = rate + 0.01){
        printf("Rate: %.2f\n\n", rate);
       printf("%4s%21s\n","Year","Amount on deposit");
    for (year = 1; year <= 10 ; ++year) {
        amount = principal * pow(1.0 + rate , year);

        printf("%4u%21.2f\n",year,amount);
        }
    puts("");
    }

    //Asteriks program

    **********
    *********
    ********
    *******
    ******
    *****
    ****
    ***
    **
    *

    for (int i = 1; i <= 10 ; ++i) {
        for (int j = 10; j >= i ; --j) {
            printf("*");
        }
        puts("");
    }

//*****
 //****
  //***
   //**
    //*
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j <= i ; ++j) {
            printf(" ");
        }
        for (int k = 10; k > i ; --k) {
            printf("*");
        }

        puts("");
        }


//     *
//    **
//   ***
//  ****
// *****

    for (int i = 1; i <= 5 ; ++i) {
        for (int j = 5; j >= i ; --j) {
            printf(" ");
        }
        for (int k = 1; k < i ; ++k) {
            printf("*");
        }
        puts("");
    }



    ____*  //2n-1 for odd numbers
    ___***
    __*****
    _*******
    *********


    for (int i = 1; i <= 5 ; ++i) {
        for (int j = 5; j >= i ; --j) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i - 1 ) ; ++k) {
            printf("*");
        }
        puts("");

    }
        //Tüm yildizlarin ortasında boşluk bırakmak icin if/else kullanmayi unutma.

    for (int i = 0 ; i < 5 ; ++i) {
        for (int j = 0; j < i ; ++j) {
            printf(" ");
        }
        for (int j = 5; j >= (2*i -1) ; --j) {
            printf("*");
        }
        puts("");
        
    }

        int rows,i,j,k;

        scanf("%d", &rows);

    for ( i = 0; i <= rows ; ++i) {
        for ( j = i; j < rows ; j++) {
            printf("p");//For outer spaces
        }
        for ( k = 1; k <= (2 * i - 1); ++k) {

            if (i == rows || k == 1 || k == (2 * i - 1))// for last row -- for first star -- for last star
           printf("*");
            else
            printf(" ");//For inner spaces.
        }
        puts("");
      }


    int i,j,k;

    for( i = 1; i <= 10;i++){
        for(j = 10; j>=i;j--){
            printf(" ");
        }
        for(k = 1; k<= i;k++){
            printf("*");
        }
        puts("");
    }

    int hesapNo,krediLimit,newLimit,borc;
    for (int i = 0; i < 3 ; ++i) {
        printf("Hesap no giriniz: \n");
        scanf("%d",&hesapNo);

        printf("Kredi Limitini giriniz:\n ");
        scanf("%d",&krediLimit);

        printf("Borc miktarini giriniz: \n");
        scanf("%d",&borc);

        newLimit = krediLimit / 2;

        if (borc > newLimit){
            printf("Rejected.");
        } else
            printf("Accepted.");
    }

    int sayi;

    scanf("%d",&sayi);
   while ( sayi != -1){
        if (sayi >= 5 && sayi <= 30){
            for (int j = 0; j < sayi ; ++j) {
                printf("*");
            }
        } else
        printf("Try again. ");

        puts("");
       scanf("%d",&sayi);
    }

    int urunNo,adet;
    float urunFiyat,birGunToplam = 0,tumToplam = 0 ;

    printf("Urun numarasi giriniz: ");
    scanf("%d",&urunNo);

    printf("Bir gunde satilan adet giriniz: ");
    scanf("%d",&adet);

    switch (urunNo) {
        case 1:
            urunFiyat = 2.98;
            birGunToplam = adet * urunFiyat;
            tumToplam += birGunToplam;
            printf("Bir gunde satilan adet: %.2f",birGunToplam);
            break;

        case 2:
            urunFiyat = 4.50;
            birGunToplam = adet * urunFiyat;
            tumToplam += birGunToplam;
            printf("Bir gunde satilan adet: %.2f",birGunToplam);
            break;

        case 3:
            urunFiyat = 9.98;
            birGunToplam = adet * urunFiyat;
            tumToplam += birGunToplam;
            printf("Bir gunde satilan adet: %.2f",birGunToplam);
            break;

        case 4:
            urunFiyat = 4.49;
            birGunToplam = adet * urunFiyat;
            tumToplam += birGunToplam;
            printf("Bir gunde satilan adet: %.2f",birGunToplam);
            break;

        case 5:
            urunFiyat = 6.87;
            birGunToplam = adet * urunFiyat;
            tumToplam += birGunToplam;
            printf("Bir gunde satilan adet: %.2f",birGunToplam);
            break;

        default:
            printf("Boyle bir urun no yok");
            break;
    }
    printf("\nHaftalik toplam: %.2f",tumToplam);
        //İkilik tabanı onluk tabana çevirme.

      //Pi = 4-4/7-4/11
      //4/3+4/5+4/9
    float  denom = 1.0,pi = 0.0;
    for (int i = 1; i <= 5000 ; ++i) {
        if (i % 2 != 0){
            pi += 4/denom;
        } else
            pi -= 4/denom;
        printf("%f\n",pi);

        denom += 2.0;
    }

//Pisagor teoremi
int a,b,c;
    for ( a = 1; a <= 500 ; ++a) {
        for ( b = 1; b <=500 ; ++b) {
            for ( c = 1; c <= 500 ; ++c) {
                if ( pow(a,2) == pow(b,2) + pow(c,2))
                printf("%d = %d + %d\n",a,b,c);
            }
        }

    }
    int quit =0;
  int calisanTuru,calisanSaat,parca;
  float maas,mesai,calisanMaas = 500.0,brutSatis;

  printf("Mudurler icin 1\n"
         "Saatlik calisanlar icin 2\n"
         "Siparis calisanlar icin 3\n"
         "Parca calisanlari icin 4\n");
  printf("Calisan Turunu giriniz:");
  scanf("%d",&calisanTuru);

while (!quit){
    switch (calisanTuru) {
        case 1:
            maas = calisanMaas + 500.0;
            printf("Haftalik maasiniz %.2f",maas);
            break;

        case 2:
            printf("Calisilan saati giriniz: ");
            scanf("%d",&calisanSaat);

            if (calisanSaat >= 1 && calisanSaat <= 40  ){
                printf("Haftalik maasiniz %.2f",calisanMaas);
            } else{
                mesai = calisanMaas + calisanSaat * 1.5;
                printf("Haftalik maasiniz %.2f",mesai);
            }
            break;

        case 3:
            printf("Brut satis miktarini giriniz: ");
            scanf("%f",&brutSatis);

            maas = 250.0 + (brutSatis * 0.57);

            printf("Maasiniz: %.2f",maas);
            break;

        case 4:

            printf("Kac parca urettiniz: ");
            scanf("%d",&parca);

            maas = parca * 4;

            printf("Maasiniz: %.2f",maas);
            break;

    }
}
        //10 base to 2 base reverse(After learning array solve it. )
    int number,remain,newNumber = 0;

    printf("Enter the number: ");
    scanf("%d",&number);

    while (number != 0){
        remain = number % 2;
        printf("%d",remain);
        number = number / 2;
    }

    int grade;
    int aCount = 0,bCount = 0, cCount = 0, dCount = 0,fCount = 0;


    puts("Enter the letter grades(m to finish): ");

   while ((grade = getchar() ) != 'm'){

        if (grade == 'a'  || grade == 'A'){
            aCount++;
        }
        else if (grade == 'b' || grade == 'B'){
        bCount++;
        }
        else if (grade == 'c' || grade ==  'C'){
            cCount++;
        }
        else if(grade == 'd' || grade == 'D'){
            dCount++;
        }
        else if(grade == 'f' || grade ==  'F'){
            fCount++;
        }
        else if (grade == '\n' || grade == '\t' || grade == ' '){
            //Empty Body
            }

        else{
            printf("Enter a new grade: \n");
        }


   }

    printf("A : %d\n",aCount);
    printf("B : %d\n",bCount);
    printf("C : %d\n",cCount);
    printf("D : %d\n",dCount);
    printf("F : %d\n",fCount);
*/

//Diamond Pattern :)))))
int n = 1,l = 4;

    for ( int i = 1; i <= 5 ; ++i) {
        for (int k = 4; k >= i ; --k) {
            printf(" ");
        }
        for (int j = 1; j <= 2*n - 1 ; ++j) {
            printf("*");
        }
        puts("");
        n++;
    }


    for (int i = 1; i <=5 ; ++i) {
        for (int j = 1; j <= i ; ++j) {
            printf(" ");
        }
        for (int k = 2*l-1; k >=1 ; --k) {
            printf("*");
        }
        puts("");
        l--;
    }



}