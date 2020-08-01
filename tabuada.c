#include <stdio.h> 

int main () {

    int n; 

    printf ("TABUADA \n"); 
    printf ("Digite um número \n");
    scanf ("%d", &n); 

    for (int i = 1; i < 11; i ++) {

        int mult; 

        mult = n * i; 

        printf (" \n %d X %d = %d", n, i, mult); 
    }


    return 0; 
}