/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int i, j, rows, k;  
    printf (" Enter a number to define the rows:  ");  
    scanf("%d", &rows);   
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)  
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  

    return 0;
}
