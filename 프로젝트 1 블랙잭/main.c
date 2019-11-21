#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30


//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;							


//player info
int dollar[N_MAX_USER];						//dollars that each player has
int n_user;									//number of users


//play yard information
int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag

//some utility functions

//get an integer input from standard input (keyboard)


//return : input integer value
//         (-1 is returned if keyboard input was not integer)
int getIntegerInput(void) {
    int input, num;
    
    num = scanf("%d", &input);
    fflush(stdin);
    if (num != 1) //if it fails to get integer
        input = -1;
    
    return input;
}


//card processing functions ---------------

//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) { 	
}

//print the card information (e.g. DiaA)
void printCard(int cardnum) {
	
}


//card array controllers -------------------------------

//mix the card sets and put in the array
int mixCardTray(void) {
	
	int N_CARDSET={NULL};
   	char CARD[N_CARD]=					//HRT, CLV, DIA, SPD
   {1,2,3,4,5,6,7,8,9,10,10,10,10,
   	1,2,3,4,5,6,7,8,9,10,10,10,10,
   	1,2,3,4,5,6,7,8,9,10,10,10,10,
   	1,2,3,4,5,6,7,8,9,10,10,10,10};
   
   int CardTray;
   int i,j,k; 	
   
   srand((unsigned)time(NULL));

	 
   for(i=0;i<52;i++){					//mix the card
      N_CARD[i]=(rand()%52)+1;
      
      for(j=0;j<i;j++)
      {
         if(N_CARD[j] == N_CARD[i])
         { i--;
          break;
          }
      }
   }

   
   N_CARDSET=N_CARD;
   CardTray=N_CARDSET;
 
   return CardTray;
}


//get one card from the tray
int pullCard(void) {
	
	int a;	
   
	srand((unsigned)time(NULL));
	a=rand()%N_CARD;
   
   return a;
}


//playing game functions -----------------------------

//player settiing
int configUser(void) {
	
	int n_user;
	
		while(1){
		
		printf("Input the number of players (MAX : 5) : ");
		scanf("%d", &n_user);
		
			if(n_user<0){
				printf("it's impossible!(%d)\n", n_user);
				continue;
			}
			else if(n_user>5){
				printf("TOOOOOO MANY!\n");
				continue;
			}
			else{
				printf("-->card is mixed and put into the tray");
				break;
			}	
		}
	
}


//betting
int betDollar(void) {
	
	int dollar, i, N_Max_Bet;
   	srand(time(NULL));

	while(1)
	{	
		printf("--------BETTING STEP--------\n");	
		printf("-> your betting (total:$%d) : ", N_Max_Bet);
		scanf("%d", &dollar); 

			if (dollar > N_Max_Bet)  
      	{
         	printf("you only have $%d! bet again\n", N_Max_Bet);
         	continue;
      	}
      		else (dollar <= N_Max_Bet);  
      	{
         		for(i=0;i<n_user;i++)
            	printf("-> player%d bets $%d (out of $50)\n", i, rand()%N_Max_Bet);
         		printf("----------------------------\n");
         		break;
      	}   
   }

}


//offering initial 2 cards
void offerCards(void) {
	int i;
	//1. give two card for each players
	for (i=0;i<n_user;i++)
	{
		cardhold[i][0] = pullCard();
		cardhold[i][1] = pullCard();
	}
	//2. give two card for the operator
	cardhold[n_user][0] = pullCard();
	cardhold[n_user][1] = pullCard();
	
	return;
}

//print initial card status
void printCardInitialStatus(void) {
	
	
}

int getAction(void) {
	
	char c;
	printf("::: Action? (0- go, others - stay)\n");
	scanf("%c", &c);
	
	if(c=='0')
	{
		
	}	
	else
	{
		
	}
}

char *Get_pattern(int pattern) //CARD PATTERN
{
	if(pattern == 0)
		return "DIA";
	else if(patern == 1)
		return "HRT"
	else if(patern == 2)
		return "CLV"
	else (patern == 3)
		return "SPD"
}
void printUserCardStatus(int user, int cardcnt) {
	int i;
	char pattern; //0=DIA, 1=HRT, 2= CLV, 3=SPD
	
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\t ::: ");
	scanf("%c%d", &c, &d)
}




// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult() {
	
}

int checkResult() {
	
	
}

int checkWinner() {
	
}



int main(int argc, char *argv[]) {
	int roundIndex = 0;
	int max_user;
	int i;
	char CARD[N_CARD];
	
	srand((unsigned)time(NULL));
	
	while(1)
   {
      //set the number of players
      configUser();
      printf("---------------------------\n");
      printf("--------ROUND %d (cardIndex: %d)-----------", roundIndex, cardindex);
      roundIndex++;
      printf("---------------------------\n");
}


	//Game initialization --------
	//1. players' dollar
	
	//2. card tray
	mixCardTray();



	//Game start --------
	do {
		
		betDollar();
		offerCards(); //1. give cards to all the players
		
		printCardInitialStatus();
		
		printf("\n------------------ GAME start --------------------------\n");
		
		//each player's turn
		for () //each player
		{
			while () //do until the player dies or player says stop
			{
				//print current card status printUserCardStatus();
				//check the card status ::: calcStepResult()
				//GO? STOP? ::: getAction()
				//check if the turn ends or not
			}
		}
		
		//result
		printf("-------------------- ROUND %d result ....", roundIndex);
		checkResult();
	} while (gameEnd == 0);
	
	checkWinner();
	
	
	return 0;
}
//교수님, 내년에다시뵐게요,,,,,,,,,,ㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜ 
