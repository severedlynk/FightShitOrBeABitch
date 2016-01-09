//intellectual property of Quinn Johns as of 2016
//still a work in progress
//should compile but will end at certain points
#include <stdio.h>
#include <stdlib.h>

int main()
{

	char direction;//options are A, B, and C
	char backout;

	printf("\n");
	printf("Fight Shit Or Be A Bitch\n");
	printf("A Create Your Own Adventure Text Based Game\n");
	printf("By Quinn Johns\n");
	printf("\n");
	printf("\n");
	printf("Choose a direction you wish to head:\n");
	printf("A. Destination 1\n");
	printf("B. Destination 2\n");
	printf("C. Destination 3\n");
	scanf(" %c", &direction);
	printf("\n");

	if(direction == 'A'){
		printf("You have chosen to go to Destination 1\n");
		printf("Would you like to back out?\n");
		printf("A. Yes\n");
		printf("B. No\n");
		scanf(" %c", &backout);
		if (backout == 'A'){
			printf("Good decision.\n");
		}else if(backout == 'B'){
			printf("You may continue.\n");
			printf("\n");
			printf("\n");
		}
	}else if(direction == 'B'){
		printf("You have chosen to go to Destination 2\n");
		printf("Would you like to back out?\n");
		printf("A. Yes\n");
		printf("B. No\n");
		scanf(" %c", &backout);
		if (backout == 'A'){
			printf("Good decision.\n");
		}else if(backout == 'B'){
			printf("You may continue.\n");
			printf("\n");
			printf("\n");
		}
	}else if(direction == 'C'){
		printf("You have chosen to go to Destination 3\n");
		printf("Would you like to back out?\n");
		printf("A. Yes\n");
		printf("B. No\n");
		scanf(" %c", &backout);
		if (backout == 'A'){
			printf("Good decision.\n");
		}else if(backout == 'B'){
			printf("You may continue.\n");
			printf("\n");
			printf("\n");
		}
	}else if(direction > 'C'){
		printf("Incorrect option!\n");
	}

	return 0;
}