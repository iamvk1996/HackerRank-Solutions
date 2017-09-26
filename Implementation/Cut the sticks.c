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
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }  
    printf("%d\n",n);
       int count=0;
       while(count!=(n))
        {
        int small=arr[0];
        for(int i=1;i<n;i++)
            {
           if(arr[i]!=0 && arr[i]<small)
              small=arr[i];
            else if(small==0)
              small=arr[i];
            }
        for(int k=0;k<n;k++)
        if(arr[k]!=0)
        {
        arr[k]=(arr[k]-small);
           // printf("arr[%d]=%d,small=%d\n",k,arr[k],small);
        if(arr[k]==0)
            count++;
        }
           //for(int i=0;i<n;i++)
             //  printf("%d ",arr[i]);
           if((n-count)!=0)
           printf("%d\n",n-count);
        
    }
    
    return 0;
}
