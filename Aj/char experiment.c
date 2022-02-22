#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void name(){
        printf("\nConvert Character to ASCII Value and Vice Versa - \n");
    char a;
    printf("\nEnter char for a : ");
    scanf(" %c",&a);

    char b;
    printf("\nEnter char for b : ");
    scanf(" %c",&b);


    char c;
    printf("\nEnter char for c : ");
    scanf(" %c",&c);


    printf("\n\n%c%c%c",a,b,c);
    printf("\n============================================================\n");

}

void main(){

    name();
    name();
    name();



    //---------------------------------------------------------------------------
    printf("\n\nSize of int : %d",sizeof(int));
    printf("\nSize of long double : %d\n\n",sizeof(long double));



    // printf("Number : %d.\n",input);
    // printf("Char   : %c.\n",input);
    // printf("isEqual : %d",'A'==65);



}