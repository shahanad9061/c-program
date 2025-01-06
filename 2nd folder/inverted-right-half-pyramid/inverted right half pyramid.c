/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int row;
   printf("enter the number : ");
   scanf("%d",&row);
   
   for(int i=0;i<row;i++){
       for(int j=0;j<row;j++){
           if(j>=i){
               printf("* ");
           }
       }
       printf("\n");
   }


    return 0;
}
