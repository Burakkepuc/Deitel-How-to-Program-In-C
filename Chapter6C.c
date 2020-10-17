#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11
#define EXAMS 4
#define STUDENTS 3

/*void staticArrayInit();
void automaticArrayInit();

    void modifyArray(int b[], int size);
    void modifyElement(int e);

        void tryToModifyArray(const int b[]); */


            void mean(const int answer[]);
            void median(int answer[]);
            void mode(int freq[],const int answer[]);
            void bubbleSort(int a[]);
           // void printArray(const int a[]);

           int binarySearch(const int b[], int searchKey,int low,int high);
           void printHeader();
           void printRow(const int b[],int low,int mid,int high);

            int linearSearch(const int array[],int key,int size);

                int minimum(const int grades[][EXAMS],int pupils,int tests);
                int maximum(const int grades[][EXAMS],int pupils,int tests);
                double average(const int setOfGrades[],int tests);
                void printArray(const int a[][EXAMS],int pupils,int tests);

                    void print1DArray(int size,int arr[size]);
                    void print2DArray(int row,int col,int arr[row][col]);
int main() {
  /* int n[10];
   size_t i;//Counter

    for (int j = 0; j < 10; ++j) {
        n[j] = 0;
    }

    printf("%s%13s\n","Eleman","Deger");

    for (int j = 0; j < 10 ; ++j) {
        printf("%7u%13d\n",j,n[j]);
    }

  int n[10] = {32,27,64,18,95,14,90,70,60,37};
  int i;

  printf("%10s%13s\n","Eleman","Deger");

    for ( i = 0; i < 10 ; ++i) {
        printf("%7d%13d\n",i,n[i]);
    }

  // int n[5] = {0}; //Declared 0 to all indices

    int s[BOYUT];

    for (int j = 0; j < BOYUT ; ++j) {
        s[j] = 2 + 2 * j;
    }

    printf("%10s%13s\n","Eleman","Deger");

    for (int j = 0; j < BOYUT ; ++j) {
        printf("%7u%13d\n",j,s[j]);
    }


  int a[BOYUT] = {1,3,5,4,7,2,99,16,45,67,89,45}; //Start counting from 0
  int total = 0;
   a[5] = 0;

    for (int i = 0; i < BOYUT ; ++i) {
        total = total + a[i];
    }

    printf("Sum of array: %d",total);


  int answer; //counter to loop through 40 responses
  int rating; //counter to loop through frequencies 1-10

  int frequency[FREQUENCY_SIZE] = {0}; //Initialize frequency counters to 0 // From 0 to 10 => 11 frequency size

  //Place the survey responses in the responses array
  int responses[RESPONSE_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,18,
                                   1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6,
                                   5, 7, 6, 8, 6, 7, 5, 6, 6,
                                   19 ,5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    for (answer = 0; answer < RESPONSE_SIZE ; ++answer) {
        frequency[responses[answer]]++;
    }

    printf("%s%17s\n","Rating","Frequency");

    for (rating = 1; rating < FREQUENCY_SIZE ; ++rating) {
        printf("%6d%17d\n",rating,frequency[rating]);
    }

    int n[SIZE] = {19,3,15,7,11,9,13,5,17,1};
    int i,j;

    printf("%s%13s%17s\n","Element","Value","Histogram");

    for (i = 0; i < SIZE ; ++i) {
        printf("%7d%13d         ",i,n[i]);

        for (j = 0; j < n[i] ; ++j) {
            printf("%c",'*');
        }
        printf("\n");
    }
    int face,roll;

    int frequency[7] = {0};

    for (roll = 1; roll < 6000 ; ++roll) {
        face = 1 + rand() % 6;

        frequency[face]++;
    }

    printf("Frequency\tTotal\n");
    for (face = 1; face < 7 ; ++face) {
        printf("%d\t%d\n",face,frequency[face]);
    }
    //char string1[] -> 6 character with \0.
    //char string2[20] -> 19 character and null = 20 character.
    //scanf("%s",string1); -> we can't use &(unpersant) expression with strings.
    //printf("%s",string2) -> show on the screen that what ve take from user.

    char string1[20];
    char string2[] = "string literal"; //reserves 15 characters.

    printf("Enter a string: ");
    scanf("%19s",string1); //Take value in string1[20] array

    printf("\nstring1 is: %s\nstring2 is: %s\n"
           "string1 with spaces between characters is: \n",
           string1,string2);

    for (int i = 0; string1[i] != '\0' ; ++i) { //Start string1[0] and iterate each array indis until null value.
        printf("%c ",string1[i]);

    }
    printf("\n");



    printf("First call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSecond call to each function:\n");
    staticArrayInit();
    automaticArrayInit();
}

    void staticArrayInit(){
    static int array1[3];

    printf("\nValues on entering staticArrayInit:\n");
        for (int i = 0; i <= 2 ; ++i) {
            printf("array1[%d] = %d ",i,array1[i]);
        }
        printf("\nValues on exiting staticArrayInit:\n");
        for (int i = 0; i <= 2 ; ++i) {
            printf("array1[%d] = %d ",i,array1[i] += 5);
        }
}

    void automaticArrayInit(){
    int array2[3] = {1,2,3};

    printf("\n\nValues on entering automaticArrayInit:\n");

        for (int i = 0; i <= 2 ; ++i) {
            printf("array2[%d] = %d ",i,array2[i]);
        }

        printf("\nValues on exiting automaticArrayInit: \n");

        for (int i = 0; i <= 2 ; ++i) {
            printf("array2[%d] = %d ", i,array2[i] += 5);
        }

        char array[5];

        printf("array = %p\n&array[0] = %p\n &array = %p\n",
               array,&array[0], &array);


    int a[SIZE] = {0,1,2,3,4};
    int i;

    printf("Effects of passing entire array by reference\n\n"
           "The values of the original array are: \n");

    for (i = 0; i < SIZE ; ++i) {
        printf("%3d",a[i]);
    }

    printf("\n");

    //pass array a to modifyArray by reference
    modifyArray(a,SIZE);

    printf("The values of the modified array are: \n");

    for (i = 0; i < SIZE ; ++i) {
        printf("%3d",a[i]);
    }


    printf("\n\nEffects of passing array element "
           "by value:\n\nThe value of a[3] is %d\n",a[3]);

    modifyElement(a[3]);

    printf("The value of a[3] is %d\n",a[3]);

}

    void modifyArray(int b[],int size){
        int j;
        for (j = 0; j < size ; ++j) {
            b[j] *= 2;
            }
    }


        void modifyElement(int e){
            printf("Value in modifyElement is %d\n",e *= 2);


    int a[] = { 10,20,30};

    tryToModifyArray(a);

    printf("%d %d %d",a[0],a[1],a[2]);
}

    void tryTomodifyArray(const int b[]){
    //b[0] /= 2;
    //b[1] /= 2;
    //b[2] /= 2;



    int a[SIZE] = {2,4,6,8,10,12,89,68,45,37};
    int pass; //passes counter
    int i;//comparisons counter
    int hold;//temporary location used to swap array elements

    printf("Data items in original order\n");

    for (int i = 0; i < SIZE ; ++i) {
        printf("%4d",a[i]);
    }

    //buble sort
    //loop to control number of passes(dolasmayi kontrol eder)
    for (pass = 1; pass < SIZE ; ++pass) {

        //loop to control number of comparisons per pass
        for (i = 0; i < SIZE - 1 ; ++i) {
            //Compare adjacent elements and swap them
            //if first element is greater than second element

            if (a[i] > a[i + 1]){
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
    printf("\nData items in ascending order\n");
    for (int i = 0; i < SIZE ; ++i) {
        printf("%4d",a[i]);
    }
    printf("\n");

  int frequency[10] = {0}; //Dizi frekansına başlangıç değeri ataması.

  //cevap dizisine başlangıç değerlerinin atanması
  int response[SIZE] = {
          6,7,8,9,8,7,8,9,8,9,
          7,8,9,5,9,8,7,8,7,8,
          6,7,8,9,3,9,8,7,8,7,
          7,8,9,8,9,8,9,7,8,9,
          6,7,8,7,8,7,9,8,9,2,
          7,8,9,8,9,8,9,7,5,3,
          5,6,7,2,5,3,9,4,6,4,
          7,8,9,6,8,7,8,9,7,8,
          7,4,4,2,5,3,8,7,5,6,
          4,5,6,1,6,5,7,8,7};

  //cevapların islenmesi
                   mean(response);    //köşeli parantez yok dizi geçirilirken.
                   median(response);
                   mode(frequency,response);;
}

//cevap dizisinin ortalamasını hesaplama.(Alırken köşeli parantez)
    void mean(const int answer[]){
    
    int j,total = 0;
    printf("%s\n%s\n%s\n","**********", "    Mean","**********");

        for (j = 0; j < SIZE ; ++j) {
           total += answer[j];
        }

        printf("The mean is average value of the data\n"
               "items. The mean is equal to the total of\n"
               "all data items divided by the number\n"
               "of data items (%d). The mean value for\n"
               "This run is: %d / %d = %.4f\n\n",
               SIZE,total,SIZE,(double)total / SIZE);
}

    void median(int answer[]){

    printf("\n%s\n%s\n%s\n%s",
               "**********","   Median","**********",
               "The unsorted array of responses is");

       printArray(answer);
       bubbleSort(answer);

       printf("\n\nThe sorted array is");
       printArray(answer);

       printf("\n\nThe median is element %d of \n"
                  "the sorted %d element array.\n"
                  "For this run the median is %d\n\n",
                  SIZE / 2,SIZE,answer[SIZE / 2]);
    }

    void mode(int freq[],const int answer[]){
    int rating; //counter for accesing elements 1-9 of array freq
    int j; //counter for summarizing elements 0-98 of array answer
    int h; //counter for displaying histograms of elements in array freq
    int largest = 0; //represents largest frequency
    int modeValue = 0; //represents most frequent response

    printf("%s\n%s\n%s\n","**********", "    Mod","**********");

         //initialize frequencies to 0
        for (rating = 1; rating <= 9 ; ++rating) {
            freq[rating] = 0;
        }
         //To sum all frequencies
        for ( j = 0; j < SIZE ; ++j) {
            freq[answer[j]]++;
        }

        printf("%s%11s%19s\n\n%54s\n%54s\n\n",
               "Response","  Frequency","Histogram",
               "1    1    2    2","5    0    5    0    5");

        for (rating = 1; rating <= 9 ; ++rating) {

            printf("% 8d%11d     ",rating,freq[rating]);

            //Mod değeri ve en yüksek frekans takibi
            if (freq[rating] > largest){
                largest = freq[rating];
                 modeValue = rating; //Modevalue en sık karşılaşılan değeri bulur.
            }
            for (h = 1; h <= freq[rating] ; ++h) {
                printf("*");
            }
            printf("\n");
        }
        printf("The mode is the most frequent value.\n"
               "For this run the mode is %d which occured"
               "%d times.\n",modeValue, largest);
}


    void bubbleSort(int a[]){
    int pass; //Dolasma sayacı
    int hold; //gecici degisken
    int i; //Yer degistirme sayacı

        for (pass = 1; pass < SIZE ; ++pass) {

            for ( i = 0; i < SIZE - 1 ; ++i) {
                if (a[i] > a[i + 1]){

                    hold = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = hold;
                }
              }
            }
}

    void printArray(const int a[]){

        for (int j = 0; j < SIZE ; ++j) {

            if (j % 20 == 0){
                printf("\n");
            }

            printf("%2d",a[j]);
        }

  int a[SIZE];//create array a
  int x;//counter for initializing elements 0-99 of array a
  int searchKey; //value to locate in array a
  int element; //variable to hold location of searchKey or -1

  //create data
    for (x = 0; x < SIZE ; ++x) {
        a[x] = 2 * x;
    }

    printf("Enter integer search key:\n");
    scanf("%d",&searchKey);

    element = linearSearch(a,searchKey,SIZE);

    if (element != -1){
        printf("Found value in element %d\n",element);
    } else
        printf("Value not found\n");
}

    int linearSearch(const int array[],int key,int size){


        for (int i = 0; i < size ; ++i) {
            if (array[i] == key)
                return i;
        }
        return -1; // key not found


  int a[15];
  int i;
  int key;
  int result;

    for (i = 0; i < SIZE; ++i) {
        a[i] = 2 * i;
    }

    printf("Enter a number between 0 and 28: ");
    scanf("%d",&key);

    printHeader();

    result = binarySearch(a,key,0,SIZE - 1);

    if (result != -1){
        printf("\n%d found in array element %d\n",key,result);
    }
    else{
        printf("\n%d not found\n",key);
    }
}

int binarySearch(const int b[],int searchKey,int low,int high){
    int middle; //variable to hold middle element of array

    //loop until low subscript is greater than high subscript
    while (low <= high){

        //determine middle element of subarray being searched
        middle = (low + high) / 2;

        printRow(b,low,middle,high);

        //if searchKey matched middle element, return middle
        if (searchKey == b[middle]){
            return middle;
        }

        //if searchKey less than middle element, set new high
        else if(searchKey < b[middle]){
            high = middle - 1;
        }
        else{
            low = middle + 1;
        }
    }

    return -1;
}

void printHeader(){
    int i; //global. if it declare in scope, not goes another scope.
    printf("\nSubscripts:\n");

    for ( i = 0; i < SIZE ; ++i) {
        printf("%3d ",i);
    }
        printf("\n");

        //Output line of - characters
        for (i = 1; i <= 4 * SIZE ; ++i) {
            printf("-" );
        }
        printf("\n");

}

    void printRow(const int b[],int low,int mid,int high){
        for (int i = 0; i < SIZE ; ++i) {
            //display spaces if outside current subarray range
            if (i < low || i > high){
                printf("    ");
            }
            else if (i == mid){ //display middle element
                printf("%3d*",b[i]);
            }
            else {
                printf("%3d ",b[i]);
            }
        }

        printf("\n");


    int dizi[SIZE] = {1,2,3,4,5,6,7,8,9,10}; // 10 eleman 9 indisli bir  dizi
                //    0 1 2 3 4 5 6 7 8 9 -> indis'ler.
    int middle; //orta elemanı tutan değişken
    int key; // bulunacak deger.
    int low,high; // dizinin başı ve sonu

    scanf("%d",&key);


    low = 0;
    high = SIZE - 1;



    while(low <= high){
        middle = (low + high) / 2;

        if(key == dizi[middle]){
            printf("Deger bulundu. %d. index",middle);
            break;
        }

        else if(key < dizi[middle]){
            high = middle - 1;
        }
        else{
            low = middle + 1;
        }
    }


  int array1[2][3] = {{1,2,3},{4,5,6}};
  int array2[2][3] = {1,2,3,4,5};
  int array3[2][3] = {{1,2},{4}};

  printf("Values in array1 by row are:\n");
  printArray(array1);

    printf("Values in array2 by row are:\n");
    printArray(array2);
    printf("Values in array3 by row are:\n");
    printArray(array3);


        }

        void printArray(const int a[][3]){
            int i; //row counter
            int j;//column counter

            for (i = 0; i <= 1 ; ++i) {
                for (j = 0; j <= 2; ++j) {
                    printf("%d ", a[i][j]);
                }
                puts(" ");
            }


  int student;
  //initialize student grades for three students (rows)
  const int studentGrades[STUDENTS][EXAMS] =
          {{77,68,86,73},
           {96,87,89,78},
           {70,90,86,81} };

  printf("The array is: \n");
  printArray(studentGrades,STUDENTS,EXAMS);

  printf("\n\nLowest grade: %d\nHighest grade: %d\n",
         minimum(studentGrades,STUDENTS,EXAMS),
         maximum(studentGrades,STUDENTS,EXAMS));

    for ( student = 0; student < STUDENTS ; ++student) {
        printf("The average grade for student %d is %.2f\n",
               student,average(studentGrades[student],EXAMS));
    }

}

int minimum(const int grades[][EXAMS],int pupils,int tests){
    int i;//student
    int j;//exam
    int lowGrade = 100; //initialize to highest possible grade

    for (i = 0; i < pupils ; ++i) {
        for (j = 0; j < tests ; ++j) {
            if (grades[i][j] < lowGrade){
                lowGrade = grades[i][j];
            }
        }
    }
    return lowGrade;
}

int maximum(const int grades[][EXAMS],int pupils,int tests){
    int i;
    int j;
    int highGrade = 0;
    for (i = 0; i < pupils ; ++i) {
        for (j = 0; j < tests ; ++j) {
            if (grades[i][j] > highGrade){
                highGrade = grades[i][j];
            }
        }
    }
    return highGrade;
}

double average(const int setOfGrades[],int tests){
    int i,total = 0;
    for (i = 0; i < tests ; ++i) {
        total += setOfGrades[i];
    }

    return (double ) total / tests;
}

void printArray(const int grades[][EXAMS],int pupils,int tests){
    int i,j;

    printf("                [0]  [1]  [2]  [3]");

    for (i = 0; i < pupils ; ++i) {
        printf("\nstudentGrades[%d] ",i);//Output label for row
        for (j = 0; j < tests ; ++j) { //output grades for one student
            printf("%-5d",grades[i][j]);
        }
    }*/

  //6.10

  int arraySize;//1 Boyutlu dizinin uzunlugu
  int row1,col1,row2,col2; //2 boyutlu dizinin satır ve sütun sayıları

  printf("Tek boyutlu bir dizi uzunlugu giriniz: ");
  scanf("%d",&arraySize);

  printf("Iki boyutlu bir dizi icin satir ve sutun sayisi giriniz: ");
  scanf("%d%d",&row1,&col1);

    printf("Iki boyutlu baska bir dizi icin satir ve sutun sayisi giriniz: ");
    scanf("%d%d",&row2,&col2);

  int array[arraySize]; //Tek boyutlu degisken uzunluklu dizi tanımlanması
  int array2D1[row1][col1]; //Iki boyutlu degisken uzunluklu dizi tanımlanması
  int array2D2[row2][col2]; //Iki boyutlu degisken uzunluklu bir dizi tanımlanması

  //degisken uzunluklu dizilerin sizeOf operatörünün test edilmesi

  printf("\nsizeof ile dizi uzunlugu %d byte'tir\n",sizeof(array));

  //tek boyutlu diziye eleman atanilmasi.
    for (int i = 0; i < arraySize ; ++i) {
        array[i] = i * i;
    }

    //iki boyutlu diziye eleman atanmasi

    for (int i = 0; i < row1 ; ++i) {
        for (int j = 0; j < col1 ; ++j) {
            array2D1[i][j] = i + j;
        }
    }

    for (int i = 0; i < row2 ; ++i) {
        for (int j = 0; j < col2 ; ++j) {
            array2D2[i][j] = i + j;
        }

        printf("\nTek boyutlu dizi: \n");
        print1DArray(arraySize,array);

        printf("\nIlk 2 boyutlu dizi: \n");
        print2DArray(row1,col1,array2D1);

        printf("\nIkinci 2 boyutlu dizi: \n");
        print2DArray(row2,col2,array2D2);

    }

}
    void print1DArray(int size,int array[size]){
        for (int i = 0; i < size; ++i) {
            printf("array[%d] = %d\n",i,array[i]);
        }
    }
    void print2DArray(int row,int col,int arr[row][col]){
        for (int i = 0; i < row ; ++i) {
            for (int j = 0; j < col ; ++j) {
                printf("%5d",arr[i][j]);
            }
            printf("\n");
        }
}