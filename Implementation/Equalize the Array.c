#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int hash[101]={0};
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        hash[a[i]]++;
    }
    int max_freq=hash[1];
    for(int i=1;i<101;i++)
        {
        if(hash[i]>max_freq)
            max_freq=hash[i];
    }
    printf("%d",n-max_freq);
    return 0;
}
