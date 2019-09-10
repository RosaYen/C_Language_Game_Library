# include<stdio.h>
# include<stdlib.h>
# include<time.h> 

int main(void){
	int cardpoint;
	float cppoint; 
	float sum=0;
	int reply;
	srand(time(NULL));
	printf("來跟電腦PK10點半吧!\n只要卡牌點數總和不超過10點半，並且不小於電腦卡牌點數總和\n那你就贏了!\nJ、Q、K牌每張視為0.5點\n");
	while(sum<=10.5){
		printf("Do you want to add another card?\nType 1 for yes or\nType 2 for no\n");
		scanf("%d",&reply);
		if(reply==1){
			cardpoint=1+rand()%13;
			sum+=cardpoint;
			if(cardpoint<=10){
				printf("\nYou get a %d card\n",cardpoint);
			}
			else if(cardpoint==11){
				printf("\nYou get a J card\n");
				sum-=10.5; 
			}
			else if(cardpoint==12){
				printf("\nYou get a Q card\n");
				sum-=11.5; 
			}
			else{
				printf("\nYou get a K card\n");
				sum-=12.5; 
			}
			printf("You get %.1f points\n\n",sum);
		}
		else if(reply==2){
			break;
		}
		else{
			printf("Please type 1 or 2 again\n\n"); 
		} 
	}
	if(sum<=10.5){
		cppoint=0.5+rand()%(21/2);
		if(sum>=cppoint){
			printf("\nComputer gets %.1f points\n\nYou win!\n",cppoint);
		}
		else{ 
			printf("\nComputer gets %.1f points\n\nYou lose\n",cppoint);
		}	
	}
	else{
		printf("\nYou lose\n");
	}
		
}
