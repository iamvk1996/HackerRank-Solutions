#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long b; 
        long w; 
        scanf("%ld %ld",&b,&w);
        long x; 
        long y; 
        long z;
        long cost=0;
        scanf("%ld %ld %ld",&x,&y,&z);
        if(x==y)
            {
            cost=x*b+y*w;
            }
       else if(x<y)
           {
           cost=x*b;
           if((w*y)>(w*(x+z)))
               cost=cost+(w*(x+z));
              else 
               cost=cost+w*y;
           }
        else if(y<x)
            {
            cost=y*w;
            if((b*x)>(b*(y+z)))
                cost=cost+(b*(y+z));
            else 
                cost=cost+b*x;
            }
        
        printf("%ld\n",cost);
    }
    
    return 0;
}
