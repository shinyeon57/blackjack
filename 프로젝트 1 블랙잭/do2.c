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
		
		if (dollar > 50) //50戚焼艦虞亜走壱赤澗 葵 
		{
			printf("you only have $50! bet again\n");//50含君 切軒拭 薄仙 亜走壱 赤澗 葵 脊径.
			continue;
		}
		 else (dollar <= 50); //亜走壱赤澗 葵 
		{
			for (i=1;i<n_user;i++){
			
			printf("-> player[i] bets $%d (out of $50)\n", rand()%50);//rand研 N_Max_Bet稽 蟹寛操醤馬澗牛,,,,,,,  
			//脊径廃呪企稽player 呪研 窒径背鎧醤喫 嬢胸惟 背醤拝猿?;;ぞぞぞぞぞぞぞ 
			printf("----------------------------");
			break;
			}
		}	
	}



	return 0;
	}

	

