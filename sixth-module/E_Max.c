// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a,max = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a>max)
        {
            max=a;
        }
        
    }
    
    printf("%d\n", max);
    
    return 0;
}

// jodi negative value soho count kora lage tahole nicher niyom but jodi negative value na ber kora lage and only max ber kora lage tahole opur er niyom

// #include <stdio.h>
// get for max min value 
// #include<limits.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a,max = INT_MIN,min = INT_MAX;
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &a);
//         if (a>max)
//         {
//             max=a;
//         }
//         if (a<min)
//         {
//             min=a;
//         }
        
//     }
    
//     printf("%d %d\n", max,min);
    
//     return 0;
// }