#include <stdio.h>
#define SUITS 4
#define FACES 13
#define CARDS 52

	//PROTOTYPES
	void shuffle(int wDeck[][FACES]);//Karýþtýrma deck üzerinde deðiþiklik yapar.
	void deal (int wDeck[][FACES],const char *wFace[], const char *wSuit[] ); //Kartlarý daðýtmak diziler üzerinde deðiþiklik yapmaz.

	int main(){
	//suit dizisini yükle
	const char *suit[SUITS] = {"Hearts","Diamonds","Clubs","Spades"};
	
	//face dizisini yükle
	const char *face[FACES] = { "Ace","Deuce","Three","Four",
							  	"Five","Six","Seven","Eight",
							  	"Nine","Ten","Jack","Queen","King"
								};
	
	//deck dizisini yükle
	int deck[SUITS][FACES] = {0};
	
	srand(time(NULL));
	
	shuffle(deck);//Desteyi karýþtýr.
	deal(deck,face,suit); //Desteyi daðýt.
	
}
	//Deck içerisindeki kartlarý karýþtýr.
	void shuffle(int wDeck[][FACES]){
		int row,column,card;
		
		//Kartlarýn herbiri için deck yuvasýný rastgele olarak seç
		for(card = 1; card <= CARDS; ++card){
			
			//Kullanýlmayan yuva bulunana kadar rastgele olarak yeni bir yer seç.
			do{
				row = rand() % SUITS;
				//printf("%d ", row);
				column = rand() % FACES;
				//printf("%d\n",column);
			}while(wDeck[row][column] != 0);
			
			//seçilen deck yuvasý içerisine kart yuvasýný yerleþtir.
			
			wDeck[row][column] = card;
		}
	}
	
	void deal(int wDeck[][FACES], const char *wFace[],const char *wSuit[])
	{
		int card,row,column;
		
		//Kartlarýn her birini daðýt
		for(card = 1; card <= CARDS; ++card){
		printf("card: %d ",card);
		//wDeck satýrlarý boyunca döngü oluþtur.
		for(row = 0; row < SUITS; ++row){
			
			//Geçerli satýr için wDeck sütunlarý boyunca döngü oluþtur.
			for(column = 0; column < FACES; ++column){
				if(wDeck[row][column] == card){
					printf("%5s of %-8s%c",wFace[column],wSuit[row],
					card % 2 == 0 ? '\n':'\t'); //2 sütun biçimi
				}
			}
		}
		}
	}
