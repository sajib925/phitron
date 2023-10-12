// #include <stdio.h>

// int main() {

//     int n;
//     int a [n];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &a[i]);
//     }
    
//      for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 0)
//         {
//            a[i]= 1;
//         } 
//         else if (a[i]  < 0)
//         {
//             a[i]= 2;
//         } 
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // x mane index v mane value ei khane je index number deya hobe and then je value ta deya hobe sei ta porer line array te push kora hoise.
    int x,v;
    scanf("%d %d", &x,&v);
    a[x] = v;
     for(int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    
    return 0;
}