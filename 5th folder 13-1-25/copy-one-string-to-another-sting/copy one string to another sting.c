/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>    

int main()
{
    char from[] = "C Program";    
    char to[50];    
    strcpy(to,from);    
    printf("Source string: %s\n", from);    
    printf("Destination string: %s\n", to);    
    return 0;
}