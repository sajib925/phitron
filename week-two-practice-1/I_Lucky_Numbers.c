#include <stdio.h>

int main() {

    int n;
    scanf("%d %d",&n);
    int a= n/10, b= n% 10;
    if (a % b == 0 || b % a == 0)
    {
       printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}