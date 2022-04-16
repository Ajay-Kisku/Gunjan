#include <stdio.h>

int main(){

    printf("\nEnter a character : ");
    char input;
    scanf("%c",&input);
    printf("You entered       : %%d = \"%d\" and %%c = \"%c\". \n", input, input);
    return 0;
}

// why in this world it doesn't thow any error
//     char input;
//     scanf("%d",&input);


//Outputs

// Enter a character : a
// You entered       : %d = "97" and %c = "a".

// Enter a character : 95
// You entered       : %d = "57" and %c = "9".

