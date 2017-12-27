#include <stdio.h>
#define GOAL_NBR 37

int main() {
	int input = 0;
	int tries = 0;

	while (input != GOAL_NBR){
		printf("Enter a guess: ");
		scanf("%d", &input);

		if(input < GOAL_NBR){
			printf("Too low\n");
		} else if(input > GOAL_NBR){
			printf("Too high\n");
		}
		tries++;
	}
	printf("Well done ! You've found the number in %d tries !", tries);
	return 0;
}