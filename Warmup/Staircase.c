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
    for(int i=1;i<=n;i++)
        {
        for(int k=i;k<=n-1;k++)
            {
            printf("%c",' ' );
        }
        for(int j=1;j<=i;j++)
            {
            printf("%c",'#');
            
        }
        printf("\n");
    }
    
    return 0;
}
