#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int point[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	size_t i;
	int sum=0;
	srand(time(NULL));
	char reply;
	
	while(sum<=99)
	{
		printf("Do you want to keep playing the game?\n Please type y for yes, or n for no\n");
		scanf("%c",&reply);
		if(reply=='Y' || reply=='y')
		{
			i=rand()%13;
			sum+=point[i];
			printf("Get a %d card! The total is %d\n\n",point[i],sum);
		}
		else if(reply=='N' || reply=='n')
		{
			printf("The total is %d\n",sum);
			break;
		}
		else
		{
			printf("Please type y or n\n");
		}
	}
	if(sum>99)
	{
		printf("Boom! You lose!\n");
		return 0;
	}
	else
	{
		printf("You win!\n");
	}
}
