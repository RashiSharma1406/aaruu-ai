#include <stdio.h>
//this program calculates the cube of a number entered by the user.
int main () {
    int n;
    printf (" enter n");
    scanf  ("%d", &n);
    
    int cube=n*n*n;
    printf (" cube: %d", cube);
       return 0;
} 
