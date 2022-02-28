#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

void stickLoadingAnimation(){

    char string[] = "\\|/-";

    for (int i = 0; i <= strlen(string) - 1 ; i++){

        printf("  Loading %c\r",string[i]);
        sleep(1);
    }
}

void dotLoadingAnimation(){

    char string[5][20] = {"Loading        ", "Loading.    ", "Loading..   ", "Loading...  ","\0"};

    for (int i = 0; i <= 3 ; i++){

        printf("  %s                         \r",string[i]);
        sleep(1);
    }

}

int main(){

    printf("\nWe have two loading animations \n");
    printf("----------------------------------------");
    printf("\nPress - 1. for Dot Loading Animation\n        2. for Stick Loading Animation \n\n");
    
    while (1){
        printf("Waiting for you choice...");
        char input = getch();
		printf("\r                                     \r");

        if (input == '1'){

            for (int i = 0; i < 3 ; i++){
            dotLoadingAnimation();
            }
        }
        
        else if (input == '2'){

            for (int i = 0; i < 3 ; i++){
            stickLoadingAnimation();
            }
        }else if ( input == 13 ) continue;
        else {
			printf("Good Bye!!\n");
            sleep(1);
			exit(1);
		}
}

	return 0;
}