/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
      int arr[] = {5, -3, 0, 7, -1, 0, 4, -6};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int positive = 0, negative = 0, zeros = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;  
        else if (arr[i] < 0)
            negative++;  
        else
            zeros++;     
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zeros);


    return 0;
}
