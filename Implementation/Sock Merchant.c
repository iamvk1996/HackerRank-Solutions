#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int hash[101]={0};
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int count=0,j,temp=0;
    for(int i=0;i<n;i++)
        {
        j=c[i];
        hash[j]++;
    }
    for(int i=1;i<101;i++)
        {
        temp=hash[i]/2;
        count=count+temp;
    }
   printf("%d",count);     
    return 0;
}
