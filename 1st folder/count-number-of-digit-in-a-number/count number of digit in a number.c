/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=0,b;
    printf("enter the numkber : ");
    scanf("%d",&b);
    
    do{
        b/=10;
        a++;
    }
    while(b!=0);
    printf("number of digits in your number is : %d",a);
    
    

    return 0;
}
