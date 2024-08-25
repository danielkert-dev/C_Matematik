#include <stdio.h>
#include "../../../utils/dash_box.h"

#include "algebra/algebra.c"

void toppic_val(void) {

    // Variables
    int val;

    // Loop the choises (1 is true)
    while (1) {

        // Check if the scanf was valid, if not then clear it and try again (& for pointers)
        if(scanf(" %d", &val) != 1) {
            printf("Valen finns inte. Valja igen.\n");
            while (getchar() != '\n');
            continue;
        }

        // If the choise exeesed the range of choises
        if (val < 1 || val > 19) {
            printf("Valen finns inte. Valja igen.\n");
            continue;
        }
        else {
            // Switch between the formula collections
            switch (val) {
                case 1:
                    algebra();
                    break;

                case 2:
                    break;
            }

            // End the main while loop
            break;
        }
    }

    // printf("The loop has ended in toppic.\n");

}

void toppic(void) {

    // Variabler


    // Val lista
    char *text[] = {
        "Valja amnen som du vill lossa",
        "1. Algebra",
        "2. Val 2",
        "3. Val 3",
        "4. Val 4",
        "5. Val 5",
        "6. Val 6",
        "7. Val 7",
        "8. Val 8",
        "9. Val 9",
        "10. Val 10",
        "11. Val 11",
        "12. Val 12",
        "13. Val 13",
        "14. Val 14",
        "15. Val 15",
        "16. Val 16",
        "17. Val 17",
        "18. Val 18",
        "19. Val 19",
    };

    dash_box(text, 20, 100);

    toppic_val();
    
}