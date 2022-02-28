#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

void hello(){

	char name[51];

	printf("\nEnter your name : ");
	gets(name);
	printf("\r                                     \r");

	//sometimes this doesn't show underline below the text, like it does not get renderd
	//it works fine in VS Code
	printf("Hello \033[4m%s\033[0m, have a good day.\n",name); 
	printf("\n-------------------------------------\n");
	
}

int main(){

	printf("\nJust Saying Hello to you. \n");
	
	hello();

	while (1){
		printf("Do you want to run it again (y/n): ");
		char runAgain = getch();

		printf("\r                                     \r");
		if (runAgain == 'y' || runAgain == 'Y') hello();
		else if ( runAgain == 13 ) continue; // 13 is the ascii value of Enter Key //after having the else part this line can be skipped
		else if ( runAgain == 27 || runAgain == 'q' || runAgain == 'Q' || runAgain == 'n' || runAgain == 'N'){
			printf("Good Bye!!\n");
			sleep(1);
			exit(1);
		}
		else continue ;
	}

	return 0;
}