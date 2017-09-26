#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,N,H=1; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        N=n;
        H=1;
        for(int i=1;i<=N;i++)
            {
            if(i%2==1)
                H=2*H;
            else if(i%2==0)
                H=H+1;
        }
        printf("%d\n",H);
    }
    
    return 0;
}
