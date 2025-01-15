/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>  

int countWords(char sentence[]) {
    int count = 0;
    int inWord = 0;  

    for (int i = 0; sentence[i] != '\0'; ++i) {
        
        if (isspace(sentence[i])) {
            inWord = 0;  
        } else if (!inWord) {
            inWord = 1;  
            count++;  
        }
    }

    return count;
}

int main() {
    char sentence[100];  

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  
    int numWords = countWords(sentence);
    printf("Number of words: %d\n", numWords);

    return 0;
}