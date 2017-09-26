#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int E=100;
    int k; 
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int i=1;
    while(i!=0)
    {   static int j=0;
        j=(j+k)%n;
        if(c[j]==0)
            E-=1;
        else 
            E-=3;
        i=j;
    }
    printf("%d",E);
    
    
    return 0;
}
