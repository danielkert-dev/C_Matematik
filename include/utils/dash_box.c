#include <stdio.h>
#include <string.h>
void dash_box(char *text[], int length, int width) {


    // First row of dashes
    for (int i = 0; i < width; i++) {
        printf("-");
    }

    // Break
    printf("\n");
 

    // The body of the box
    for (int i = 0; i < length; i++) {

        // Start with | and tab
        printf("|   ");
        printf("%s", text[i]);

        // The | in the end (4 for the | and tab and 1 for the end | itself)
        // Man kan inte använda svenska tecken i strlen för de är inte non-ASCII eller nånting liknande.
        // Använd ä=a å=a ö=o och så...
        int rest = width - 5 - strlen(text[i]);
        for (int i = 0; i < rest; i++) {
            printf(" ");
        }

        // End with |
        printf("|\n");
    }


    // Last row of dashes
    for (int i = 0; i < width; i++) {
        printf("-");
    }

    printf("\n");
}