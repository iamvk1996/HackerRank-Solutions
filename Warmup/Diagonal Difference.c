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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    int i,j,sum1=0,sum2=0,res;
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(i==j)
                sum1=sum1+a[i][j];
            if(i+j==(n-1))
                sum2=sum2+a[i][j];
        }
    }
    res=abs(sum1-sum2);
    printf("%d",res);
    return 0;
}
