// Given a lowercase alphabet character. You have to print the next character in the alphabet.

// Input
// Only one line containing a lowercase English letter C
// .

// Output
// Print the next letter to C
//  in the alphabet.

#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    char a = x + 1;
    if (x == 'z')
    {
        printf("a\n");
    } else 
    {
       printf("%c\n", a);
    }
    return 0;
}