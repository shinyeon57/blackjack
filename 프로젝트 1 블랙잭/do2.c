#include <stdio.h>
#include <stdlib.h>
#include "user.c"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int dollar;
	srand(time(NULL));
	
	while(1)
	{
		printf("-> your betting (total:$50) : ");
		scanf("%d", &dollar); 
		
		if (dollar > 50) //50이아니라가지고있는 값 
		{
			printf("you only have $50! bet again\n");//50달러 자리에 현재 가지고 있는 값 입력.
			continue;
		}
		 else (dollar <= 50); //가지고있는 값 
		{
			for (i=1;i<n_user;i++){
			
			printf("-> player[i] bets $%d (out of $50)\n", rand()%50);//rand를 N_Max_Bet로 나눠줘야하는듯,,,,,,,  
			//입력한수대로player 수를 출력해내야됨 어떻게 해야할까?;;ㅎㅎㅎㅎㅎㅎㅎ 
			printf("----------------------------");
			break;
			}
		}	
	}



	return 0;
	}

	

