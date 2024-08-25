#include <stdio.h>
#include <stdbool.h>

#include "../utils/dash_box.h"

#include "screen/start.c"
#include "screen/options/toppic.c"

void nav(void) {


    bool run = true;

    start();

    while (1) {

        toppic();

        char *text[] = {
            "Vill du forsatta?",
            "1. Jo, jag vill forsatta",
            "0. Nej, jag vill avsluta",
        };

        dash_box(text, 3, 100);

        // What ever number besides 0. Fix with another while loop?
        if (scanf("%d", &run) == 1 && run == 1) {
            continue;
        } else if (run == 0) {
            break;
        }

        toppic_val();
    }
}