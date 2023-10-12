// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print the answer according to the required above. If there are no even numbers print -1.
// amra jani sudu matro 1 porjonto vaule er moddei kono even sonkha nai ei jonno amra buje gesi 1 aslei sudu -1 one print korte hobe

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("-1\n");
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0)
            {
                printf("%d\n",i);
            }
            
        }
    }
    
    return 0;
}