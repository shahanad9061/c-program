/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,product=1;
    printf("enter the valu of X : ");
    scanf("%d",&x);
    printf("enter the value of Y : ");
    scanf("%d",&y);
    
    for(int i=1;i<=y;i++){
        product=product*x;
    }
    printf("value of the number : %d",product);

    return 0;
}