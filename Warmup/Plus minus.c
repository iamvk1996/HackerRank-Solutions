#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i;
    int j;
    float p=0,ne=0,z=0,P,Z,NE,c=0;
    scanf("%d\n",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(j=0;j<n;j++)
        {
        if(arr[j]>0)
            {
            p++;
        }
      else if(arr[j]==0)
            {
            z++;
        }
         else if(arr[j]<0)
                {
            ne=ne+1;
            }
    }
    P=p/n;
    Z=z/n;
    NE=ne/n;
    printf("%f\n",P);
    printf("%f\n",NE);
    printf("%f\n",Z);
    return 0;
}
