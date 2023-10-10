// The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.
// If the king has n
//  eyes, m
//  mouths and k
//  bodies, what is the largest number of Katryoshkas he can make?
// Input
// Only one line containing three numbers n
// , m
//  and k
//  (0≤n,m,k≤1018
// ) – the number of eyes, mouths and bodies respectively.

// Output
// Print the largest number of Katryoshkas he can make.


// ei problem ta valo kore buji nai so ei ta joma o dei nai


#include <stdio.h>

int main()

{

    long long int e, m, b, res = 0;

    scanf("%lld %lld %lld", &e, &m, &b);

    

    if(e == 0 || b == 0){

        printf("0\n");

    }

    else{

        long long int min = e;

    if(m < min){

        min = m;

    }

    if(b < min){

        min = b;

    }

    e -= min;

    m -= min;

    b -= min;

    res += min;

    

    if (e/2 < b){

        res += e/2;

    }

    else{

        res += b;

    }

    printf("%lld", res);

}

 

return 0;

}