#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int c[n];
    for(int i=0;i<n;i++)
        scanf("%d",&c[i]);
    int j=0;
    int count=0;
    while(j!=n-1)
        {
        if(c[j+2]==0)
            {
            j+=2;
        count++;
        }
        else
            {
            j=j+1;
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}
