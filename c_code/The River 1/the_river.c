#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
long long sum_digits(long long a){
    long long s=0;
    while(a>0){
        s += a%10;
        a=a/10;
    }
    return s;
}

int main()
{
    long long r_1;
    scanf("%lld", &r_1);
    long long r_2;
    scanf("%lld", &r_2);

    long long cmp=0,temp;
    

    while(1){
        if (r_1<r_2){
        cmp = sum_digits(r_1);
        r_1+= cmp;}
        if (r_1 ==r_2){
            printf("%ld",r_2);
            break;}
        if (r_1>r_2){
            cmp = sum_digits(r_2);
            r_2 += cmp;
        }
    }
    

    return 0;
}