#include <stdio.h>
#include "../../../../utils/dash_box.h"

#include "konjugatregeln.c"

void algebra_val(void) {

    // Variables

    int val;

    // Loop the choises (1 is true)
    while (1) {

        if(scanf(" %d", &val) != 1) {
            printf("Valen finns inte. Valja igen.\n");
            while (getchar() != '\n');
            continue;
        } else if (val < 1 || val > 9) {
            printf("Valen finns inte. Valja igen.\n");
            continue;
        } else {
            // Switch between the formula collections
            switch (val) {
                case 1:
                    konjugatregeln();
                    break;
            }

            // End the main loop
            break;
        }        
        
    }

    // printf("The loop has ended in algebra_val\n");



}

void algebra(void) {
     // Val lista
    char *text[] = {
        "Valja formel som du vill losa",
        "1. Konjugatregeln",
        "2. Val 2",
        "3. Val 3",
        "4. Val 4",
        "5. Val 5",
        "6. Val 6",
        "7. Val 7",
        "8. Val 8",
        "9. Val 9",
    };

    dash_box(text, 10, 100);

    algebra_val();

}