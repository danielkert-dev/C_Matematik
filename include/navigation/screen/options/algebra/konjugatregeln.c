#include <stdio.h>
#include <math.h>
#include "../../../../utils/dash_box.h"


int konjugatregeln()
{

    // Variables
    int a, b, svar;

    char *text[] = {
        "Konjugatregeln",
        "Beskrivning:",
        "Konjugatregeln anvands for att multiplicera tva parentesuttryck",
        "bestaende av tva termer var dar ena uttrycket beskriver summan av",
        "termerna och det andra uttrycket beskriver differensen mellan termerna.",
        "Formel:",
        "(a + b)(a - b)=a^2 - b^2",
    };

    dash_box(text, 7, 100);

    printf("\n Skriv in termen a:\n");
    scanf(" %d", &a);

    printf("\n Skriv in termen b:\n");
    scanf(" %d", &b);

    svar = (a + b) * (a - b);
    printf("a^2 - b^2 = %d\n", svar);

}