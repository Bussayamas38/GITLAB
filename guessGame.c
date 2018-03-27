#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

	int randNum, count, guess;
	char str[100];

	srand(time(NULL));

	do{

		randNum = rand() %100 +1;
		count = 1;

		printf("What's your name ? > ");
		fgets(str, 100, stdin);
		str[strlen(str)-1] = '\0';

		printf("Hello, %s\n\n", str);
		printf("I have a random number, guess it!!\n\n");

		while(1){

			printf("round %d > ", count);
			fgets(str, 100, stdin);
			sscanf(str, "%d", &guess);

			if(guess == randNum){
				printf("You WIN!!\n\n");
				break;
			}else{
				if(guess < randNum){
					printf("too less\n\n");
				}else{
					printf("too much\n\n");
				}
			}
			count++;

		}

		printf("Do you want to continue ? (YES for yes) > ");
		fflush(stdin);
		fgets(str, 100, stdin);
		str[strlen(str)-1] = '\0';

	}while(strcmp(str, "YES")==0);

	printf("\nBye bye!");

	return 0;
}