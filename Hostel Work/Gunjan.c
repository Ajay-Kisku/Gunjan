/*Here is what to do.*/
//To get selected obtain marks between 80-100, rank should be less than 2000,
//language should be English if not then you are not getting selected. Thank you!

#include <stdio.h>

int main(){

    printf("\nResult is based on - Marks, Rank and Language\n");
    printf("==============================================\n");

    float marks; int rank; char language;

    marks = 100; rank = 50, language = 'E';


    printf("\nEnter the following details -\n\n");

    printf(" * Marks  : ");
    scanf(" %f",&marks);

    printf(" * Rank   : ");
    scanf("%d",&rank);

    printf(" * Lang.  : E");
    //
    // scanf(" %C",&language);

    int isMarks    = (marks >= 80 && marks <= 100);
    int isRank     = (rank <= 2000);
    int isLanguage = (language == 'e' || language == 'E');

    printf("\n\n-------------------------------------------------------\n");

    printf("|    Marks : %6.2f  |  Rank : %0.6d  |  Lang. : %C   |\n",marks, rank, language);

    printf("-------------------------------------------------------\n");
    printf("|  Result :: ");

    if(isMarks && isRank && isLanguage){
        printf("You are selected with %6.2f marks       |", marks);
    }else{
        printf("  Sorry, you are not selected            |");
    }
    printf("\n-------------------------------------------------------\n");

    //To pause the output screen uncomment these lines
    // int x;
    // scanf("%d",&x);

    printf("\n");
    return 0;
}