#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
//	int point[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};   // not needed
	size_t i;
	int sum=0;
	srand(time(NULL));
	char reply[80];   // use string (rather than char) to accept user's input; length 80 is enough
	
	while(sum<=99)
	{
		printf("Do you want to keep playing the game?\n Please type y for yes, or n for no\n");
		scanf("%s", reply);  // to accept a string. Note that there is no '&' in front of reply
		if(reply[0]=='Y' || reply[0]=='y')   // the first character in string 'reply' is reply[0]
		{
			i=rand()%13+1;                   // just add i by one
			sum+= i;                         // then you will not need the 'point' array
			printf("Get a %d card! The total is %d\n\n",i,sum);   // use i in place of point[i]
		}
		else if(reply[0]=='N' || reply[0]=='n')
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
