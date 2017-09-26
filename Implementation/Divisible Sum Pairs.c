#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[100000];
    long int n; 
    long int k; 
    long int sum;
    int count=0;
    scanf("%ld %ld",&n,&k);
    for(long int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n-1;i++)
        {
        for(int j=i+1;j<=n;j++)
            {
            sum=a[i]+a[j];
        if(sum%k==0)
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}
