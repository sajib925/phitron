// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int a[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int min = a[0]; 
//     int minPos = 1;  

//     for (int i = 1; i < n; i++) {
//         if (a[i] < min) {
//             min = a[i];
//             minPos = i + 1; 
//         }
//     }

//     printf("%d %d\n", min, minPos);

//     return 0;
// }


#include <stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX ,pos; 

    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            pos = i + 1; 
        }
    }

    printf("%d %d\n", min, pos);

    return 0;
}