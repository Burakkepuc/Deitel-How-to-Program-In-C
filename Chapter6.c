#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define TRUE 1
#define FALSE 0

void clearBoard(int [][8]);
void printBoard(int[][8]);
int validMove(int,int,int[][8]);

int rollDice(void);
//void printArray(int a[]);
void bubbleSort(int x[]);
void someFunction ( const int b[], int startSubscript, int size);
//int whatIsThis(const int b[],int , int t);
int main() {
    /*
    //6.11
   int salaries[11] = {0},salary;
   float commision = 0.09,sales;

   printf("Enter a sales(-1 to exit): ");
   scanf("%d",&salary);

   while (salary != -1){
       sales = 200 + commision * salary;
       printf("Sales is: $%.2f\n",sales);

       if (sales >=200 && sales <= 999)
           ++salaries[(int)sales / 100];
       else
           ++salaries[10];

       printf("Enter a sales(-1 to exit): ");
       scanf("%d",&salary);
   }

   printf("200$ - 299$ salaries are: %d\n",salaries[2]);
    printf("300$ - 399$ salaries are: %d\n",salaries[3]);
    printf("400$ - 499$ salaries are: %d\n",salaries[4]);
    printf("500$ - 599$ salaries are: %d\n",salaries[5]);
    printf("600$ - 699$ salaries are: %d\n",salaries[6]);
    printf("700$ - 799$ salaries are: %d\n",salaries[7]);
    printf("800$ - 899$ salaries are: %d\n",salaries[8]);
    printf("900$ - 999$ salaries are: %d\n",salaries[9]);
    printf("Over 1000$ are %d",salaries[10]);

    //6.12
    int arr[]= {99,2,26,66,54,1,6,13};
    printf("Sirasiz dizi: ");
    printArray(arr);
    bubbleSort(arr);
    printf("\nSirali dizi: ");
    printArray(arr);

    //6.13
    //int counts[10] = {0};
    //int counts[11] = {1};
    float monthlyTemperature[12];

    for(int i=0 ; i<12 ; i++){
    scanf("%f",&monthlyTemperature[i]);
    }

    printf("Degerler: ");
    for(int i=0 ; i<12 ; i++){
        printf("%.2f ",monthlyTemperature[i]);

    //6.14 done before.

   int arr[SIZE] = {0},i,j,counter;

        for(i = 0; i < SIZE; i++ ){
            scanf("%d",&arr[i]);
        }

        //Non duplicate numbers
    for (i = 0; i < SIZE ; ++i) {
       counter = 0;
       for(j = 0 ; j < SIZE; ++j){
           if(arr[i] == arr [j])
               counter++;
       }
       if (counter < 2)
           printf("%4d",arr[i]);
    }
    int x;
    int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    x = whatIsThis(a,SIZE);

    printf("Result is: %d\n");

    }

    int whatIsThis(const int b[],int p){
    if(1 == p){
        return b[0];
    }
    else
        return b[p - 1] + whatIsThis(b,p - 1);

        int a[SIZE] = {8,3,1,2,6,0,9,7,4,5};

        puts("Answer is: ");
        someFunction(a,0,SIZE);
        puts("");
}

void someFunction ( const int b[], int startSubscript, int size){
    if (startSubscript < size){
        someFunction(b,startSubscript + 1,size);
        printf("%d ",b[startSubscript]);
    }

    srand(time(NULL));

    int total[13] = {0},i,firstDice ,secondDice;



    for (int j = 0; j < 3600 ; ++j) {
        firstDice = 1 + rand() % 6;
        secondDice = 1 + rand() % 6;
        total[firstDice + secondDice]++;
    }
    for (i = 2; i <=12 ; ++i) {
        printf("The dice face is %d : %d\n",i,total[i]);
    }


    int gameStatus, sum, myPoint, i, roll, lenght = 0, wins[22] = {0},
            loses[22] = {0}, winSum = 0, loseSum = 0;

    srand(time(NULL));

    for (i = 1; i <= 1000; ++i) {
        sum = rollDice();
        roll = 1;

        switch (sum) {
            case 7:
            case 11:
                gameStatus = 1;
                break;

            case 2:
            case 3:
            case 12:
                gameStatus = 2;
                break;
            default:
                gameStatus = 0;
                myPoint = sum;
                break;
        }

        while (gameStatus == 0) {
            sum = rollDice();
            roll++;

            if (sum == myPoint)
                gameStatus = 1;
            else if (sum == 7)
                gameStatus = 2;
        }
        if (roll > 21)
            roll = 21;

        if (gameStatus == 1) {
            wins[roll]++;
            winSum++;
        } else {
            loses[roll]++;
            loseSum++;
        }
    }

    printf("Games won or lost after 20th roll\n"
           "are displayed as the 21st roll\n\n");

    for (i = 1; i <= 21; ++i) {
        printf("%3d games won and %3d game lost on roll %d.\n",
               wins[i], loses[i], i);
    }
    //calculate chances of winning
    printf("\nThe chances of winning are %d/%d = %.2f%%\n",
           winSum, winSum + loseSum, 100.0 * winSum / (winSum + loseSum));

    //calculate average lenght of game

    for (i = 1; i <= 21; ++i) {
        lenght += wins[i] + i + loses[i] * i;
    }
    printf("The average game lenght is %.2f rolls.\n", lenght / 1000.0);




    int seats[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, economy, firstClass, determineSeats, i = 0;
    char askAgain = ' ';


    while (i <= 10) {

        printf("\nPlease type 1 for firt class \n");
        printf("Please type 2 for economy \n");
        scanf("%d", &determineSeats);


        switch (determineSeats) {

            case 1:
                printf("Enter a seats between 0 - 4: ");
                scanf("%d", &firstClass);

                if (seats[firstClass] != 1) {
                    seats[firstClass] = 1;
                    printf("Booked seat %d succesfully\n", firstClass);
                } else {
                    printf("If it's acceptable to be placed in the economy class? y/n :");
                    scanf(" %c", &askAgain);

                    if (askAgain == 'y') {
                        printf("Enter a seats between 5 - 9: ");
                        scanf("%d", &economy);

                        if (seats[economy] != 1) {
                            seats[economy] = 1;
                            printf("\nBooked seat %d succesfully\n", economy);
                        }

                    } else
                        printf("Thank you.");
                }
                break;

            case 2:
                printf("Enter a seats between 5 - 9: ");
                scanf("%d", &economy);

                if (seats[economy] != 1) {
                    seats[economy] = 1;
                    printf("Booked seat %d succesfully\n", economy);
                } else {
                    printf("If it's acceptable to be placed in the first class? y/n :");
                    scanf(" %c", &askAgain);
                    if (askAgain == 'y') {
                        printf("Enter a seats between 6 - 10: ");
                        scanf("%d", &firstClass);

                        if (seats[firstClass] != 1) {
                            seats[firstClass] = 1;
                            printf("\nBooked seat %d succesfully\n", firstClass);
                        } else
                            printf("Thank you.\n");
                    }

                }

                break;
        }

        for (int i = 0; i < 10; ++i) {
            printf("%d ", seats[i]);
        }


    }


    int sales[4][5] = {0}, salesPersonNo,i,j;
    int totalPrice;

    printf("Enter 5 values for 0-4 sales person respectively\n  ");


    for ( j = 0; j < 4 ; ++j) {
        printf("Enter 5 value for %d. person: ", j+1);
        for ( i = 0; i < 5; ++i) {
            scanf("%d", &sales[j][i]);
        }
    }


        for ( j = 0; j < 4 ; ++j) {
            totalPrice = 0;
            for (i = 0; i < 5 ; ++i) {
                totalPrice += sales[j][i];
            }
            printf("\nTotal sales %d for %d. person\n",totalPrice,j + 1);
    }*/

    int board[8][8],
        access[8][8] = {2,3,4,4,4,4,3,2,
                        3,4,6,6,6,6,4,3,
                        4,6,8,8,8,8,6,4,
                        4,6,8,8,8,8,6,4,
                        4,6,8,8,8,8,6,4,
                        4,6,8,8,8,8,6,4,
                        3,4,6,6,6,6,4,3,
                        2,3,4,4,4,4,3,2
                        };
    int currentRow,currentColumn,moveNumber = 0,
    testRow,testColumn,count,minRow,minColumn,
    minAccess = 9,accessNumber,moveType,done;

    int horizontal[8] = {2,1,-1,-2,-2,-1,1,2};
    int vertical [8] = {-1,-2,-2,-1,1,2,2,1};

    srand(time(NULL));

    clearBoard(board); //initialize array board
    currentRow = rand() % 8;
    currentColumn = rand() % 8;
    board[currentRow][currentColumn] = ++moveNumber;
    done = FALSE;

    while ( !done )
    {
        accessNumber = minAccess;

        for ( moveType = 0; moveType < 8; moveType++ )
        {
            testRow = currentRow + vertical[ moveType ];
            testColumn = currentColumn + horizontal[ moveType ];

            if ( validMove( testRow, testColumn, board ) )
            {

                if ( access[ testRow ][ testColumn ] < accessNumber )
                {
                    accessNumber = access[ testRow ][ testColumn ];
                    minRow = testRow;
                    minColumn = testColumn;
                }

                --access[ testRow ][ testColumn ];
            }
        }

        if ( accessNumber == minAccess )
            done = TRUE;
        else
        {
            currentRow = minRow;
            currentColumn = minColumn;
            board[ currentRow ][ currentColumn ] = ++moveNumber;
        }
    }

    printf("The tour ended with %d moves.\n",moveNumber);

    if (moveNumber == 64)
        printf("This was full of tour! \n\n");
    else
        printf("This was not a full tour.\n\n");
    printf("The board for this test is: \n\n");
    printBoard(board);

}

void clearBoard(int workBoard[][8]){
    int row,col;
    for (row = 0; row < 8 ; ++row) {
        for (col = 0; col < 8 ; ++col) {
            workBoard[row][col] = 0;
        }
    }
}

void printBoard(int workBoard[][8]){
    int row,col;
    printf( "   0  1  2  3  4  5  6  7\n" );
    for (row = 0; row < 8 ; ++row) {
        printf("%d",row);
        for (col = 0; col < 8 ; ++col) {
            printf("%3d",workBoard[row][col]);
            printBoard("\n");
        }
        printBoard("\n");
    }
}

int validMove(int row,int column,int workBoard[][8]){
    //NOTE : This test stops as soon as it becomes false

    return (row >= 0 && row <= 7 && column >= 0 &&
    column <= 7 && workBoard[row][column] == 0);
}











int rollDice(void){
    int die1,die2,workSum;

    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;

    workSum = die2 + die1;

    return workSum;
}
/*void printArray(int a[]){
    for (int i = 0; i < 9 ; ++i) {
        printf("%d ",a[i]);
    }
}

void bubbleSort(int x[]){
    int temp;
    for (int i = 1; i < 10 ; ++i) {
        for (int j = 0; j < 8 - i ; ++j) {
            if (x[ j ] > x[j + 1]){
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }*/
