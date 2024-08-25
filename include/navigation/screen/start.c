#include <stdio.h>
#include "../../utils/dash_box.c"

void continue_start(void) {
    // Variabler
    int ok;

    while (1) {

            if(scanf(" %d", &ok) != 1 || ok != 1) 
            {
                printf("Tryck nummer 1 att fortsätta\n");
                // Clear input buffer
                while (getchar() != '\n');
                continue;
            } 
            else if (ok == 1) 
            {
                break;
            }
        }
}

void start(void) {

    // Start info
    char *text[] = {
        "Information om C_Matematik.",
        "1. Satt sa att terminalen ser alla val pa skarmen.",
        "2. Att valja en val tryck nummer som star vid valet och tryck enter.",
        "3. Om man vill sluta programmet tryck CTRL och C.",
        " ",
        "Tryck nummer 1 att fortsatt."
        };


    dash_box(text, 6, 100);


    // Continue
    continue_start();

}