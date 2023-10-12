// Arithmatic Operator

// + Addition, - Substruction , * Multiply, / Divider, % Modulus.


// using addition operator

// #include<stdio.h>

// int main () {
//     int x = 50, y = 15;
//     int sum = x + y;
//     printf("%d", sum);
//     return 0;
// } 

// using substruction operator

// #include<stdio.h>

// int main () {
//     int x = 50, y = 15;
//     int sub = x - y;
//     printf("%d", sub);
//     return 0;
// } 

// using multiply operator

// #include<stdio.h>

// int main () {
//     int x = 50, y = 15;
//     int mul = x * y;
//     printf("%d", mul);
//     return 0;
// } 

// #include<stdio.h>

// int main () {
//     int x = 45, y = 15;
//     int div = x / y;
//     printf("%d", div);
//     return 0;
// } 

// int ke int diye divider korle int value e asbe alwas and vagsesh tuku dekhabe na, baki tuku vag sesh ba modulus.

// #include<stdio.h>

// int main () {
//     int x = 50, y = 15;
//     int div = x / y;
//     printf("%d", div);
//     return 0;
// } 

// vagsesh tuku dosomik akare dekhate hole je kono ekta ke float ba operation er varriable ke float ke use korte hobe

// #include<stdio.h>

// int main () {
//     int x = 50, y = 15;
//     float sum = x * 1.0/ y;
//     printf("%f", sum);
//     return 0;
// } 

// vagsesh tuku dekhate hole modulus use korte hobe

// #include<stdio.h>

// int main () {
//     int x = 50, y = 15;
//     int sum = x % y;
//     printf("%d", sum);
//     return 0;
// } 

// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     for(int i =1; i<= n; i++){
//         if(n%3==0 && n%7==0){
//         printf("%d\n",n);
//     }
       
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N;

//     // Input the value of N
//     printf("Enter a non-negative integer N: ");
//     scanf("%d", &N);

//     // Check and print numbers divisible by both 3 and 7
//     printf("Numbers from 1 to %d divisible by both 3 and 7 are:\n", N);
//     for (int i = 1; i <= N; i++) {
//         if (i % 3 == 0 && i % 7 == 0) {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>


// int main() {
//     char ch;
//     printf("Enter a character: ");
//  scanf("%c", &ch);


//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//         printf("%c is an alphabet.", ch);
//     }
//     else if (ch >= '0' && ch <= '9') {
//         printf("%c is a digit.", ch);
//     }
//     else {
//         printf("%c is a special character.", ch);
//     }


//     return 0;
// };

#include <stdio.h>
int main()
{
    int x = 0;
    if (x == 1)
    {
        if (x >= 0)
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    return 0;
}