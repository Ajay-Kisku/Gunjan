#include <stdio.h>

int main(){

    printf("\nEnter a number : ");
    int input;
    scanf("%d",&input);
    printf("You entered    : %%d = \"%d\" and %%c = \"%c\". \n", input, input);
    return 0;
}

//Outputs

// Enter a number : 95
// You entered    : %d = "95" and %c = "_".

// Enter a number : a
// You entered    : %d = "4194432" and %c = "Ç".


//---------------------------------------------------------------------------


//We are asking for a number by using %d format spacifier in scanf function and we are also storing it in an int variable so far so good.

//User gives input in a different data-type like user entered a character 'a'. It should throw an error like we are asking for a number and not for a character.
