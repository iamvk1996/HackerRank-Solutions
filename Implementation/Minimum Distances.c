#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,temp; 
    int k=0;
    int A[1000];
     int* D = (int *)malloc(10240 * sizeof(int));
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
       scanf("%d",&A[i]);
    }
    int d=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            {
            if(A[j]==A[i])
                {
                d=j-i;
                D[k]=d;
                k++;
            }
        }
    }    
    
    if(d==0)
        printf("-1");
    else
        {
         for (int c = 0 ; c < ( k - 1 ); c++)
  {
    for (d = 0 ; d < k - c - 1; d++)
    {
      if (D[d] > D[d+1]) /* For decreasing order use < */
      {
        temp = D[d];
        D[d] = D[d+1];
        D[d+1] = temp;
      }
    }
  }
        printf("%d",D[0]);
    }
    return 0;
}
