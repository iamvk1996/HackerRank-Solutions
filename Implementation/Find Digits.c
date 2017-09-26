#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
      //printf("xnfwxexhej");
    int t,r,c=0,N,n; 
    scanf("%d",&t);
      //printf("xnfwxexhej");
    for(int i=0;i<t;i++)
    {
        //printf("xnfwxexhej");
        c=0;
        scanf("%d",&n);
        N=n;
        while(N)
            {
            r=N%10;
             if(r!=0&&n%r==0)
                c++;
            N=N/10;
        }
        printf("%d\n",c);
        //t--;
    }
    
    
    return 0;
}
