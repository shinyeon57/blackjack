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
		
		if (dollar > 50) //50�̾ƴ϶������ִ� �� 
		{
			printf("you only have $50! bet again\n");//50�޷� �ڸ��� ���� ������ �ִ� �� �Է�.
			continue;
		}
		 else (dollar <= 50); //�������ִ� �� 
		{
			for (i=1;i<n_user;i++){
			
			printf("-> player[i] bets $%d (out of $50)\n", rand()%50);//rand�� N_Max_Bet�� ��������ϴµ�,,,,,,,  
			//�Է��Ѽ����player ���� ����س��ߵ� ��� �ؾ��ұ�?;;�������������� 
			printf("----------------------------");
			break;
			}
		}	
	}



	return 0;
	}

	

