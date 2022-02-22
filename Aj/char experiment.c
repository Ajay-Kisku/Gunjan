#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void charExperiment(){

    char a;
    printf("\nEnter char for a : ");
    scanf("%c",&a);

    char b;
    printf("\nEnter char for b : ");
    scanf("%c",&b);


    char c;
    printf("\nEnter char for c : ");
    scanf("%c",&c);


    printf("\n\n%c%c%c",a,b,c);
    printf("\n============================================================\n");

}

void main(){

    charExperiment();
    charExperiment();
    charExperiment();

}