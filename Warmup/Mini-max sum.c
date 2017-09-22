#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a[5],min,max,sum=0;
    scanf("%llu",&a[0]);
    max=a[0];
    min=a[0];
    sum=sum+a[0];
    for(int i=1;i<5;i++)
        {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
