#include <stdio.h>
#include <locale.h>
#include "../include/navigation/nav.c"

int main()
{   
    setlocale(LC_ALL, "sv_SE.UTF-8");

    nav();
    
    return 0;
}