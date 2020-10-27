#include <stdio.h>
#define SUITS 4
#define FACES 13
#define CARDS 52

	//PROTOTYPES
	void shuffle(int wDeck[][FACES]);//Kar��t�rma deck �zerinde de�i�iklik yapar.
	void deal (int wDeck[][FACES],const char *wFace[], const char *wSuit[] ); //Kartlar� da��tmak diziler �zerinde de�i�iklik yapmaz.

	int main(){
	//suit dizisini y�kle
	const char *suit[SUITS] = {"Hearts","Diamonds","Clubs","Spades"};
	
	//face dizisini y�kle
	const char *face[FACES] = { "Ace","Deuce","Three","Four",
							  	"Five","Six","Seven","Eight",
							  	"Nine","Ten","Jack","Queen","King"
								};
	
	//deck dizisini y�kle
	int deck[SUITS][FACES] = {0};
	
	srand(time(NULL));
	
	shuffle(deck);//Desteyi kar��t�r.
	deal(deck,face,suit); //Desteyi da��t.
	
}
	//Deck i�erisindeki kartlar� kar��t�r.
	void shuffle(int wDeck[][FACES]){
		int row,column,card;
		
		//Kartlar�n herbiri i�in deck yuvas�n� rastgele olarak se�
		for(card = 1; card <= CARDS; ++card){
			
			//Kullan�lmayan yuva bulunana kadar rastgele olarak yeni bir yer se�.
			do{
				row = rand() % SUITS;
				//printf("%d ", row);
				column = rand() % FACES;
				//printf("%d\n",column);
			}while(wDeck[row][column] != 0);
			
			//se�ilen deck yuvas� i�erisine kart yuvas�n� yerle�tir.
			
			wDeck[row][column] = card;
		}
	}
	
	void deal(int wDeck[][FACES], const char *wFace[],const char *wSuit[])
	{
		int card,row,column;
		
		//Kartlar�n her birini da��t
		for(card = 1; card <= CARDS; ++card){
		printf("card: %d ",card);
		//wDeck sat�rlar� boyunca d�ng� olu�tur.
		for(row = 0; row < SUITS; ++row){
			
			//Ge�erli sat�r i�in wDeck s�tunlar� boyunca d�ng� olu�tur.
			for(column = 0; column < FACES; ++column){
				if(wDeck[row][column] == card){
					printf("%5s of %-8s%c",wFace[column],wSuit[row],
					card % 2 == 0 ? '\n':'\t'); //2 s�tun bi�imi
				}
			}
		}
		}
	}
