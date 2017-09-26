#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N,count=0; 
    scanf("%d",&N);
    int *B = malloc(sizeof(int) * N);
    for(int B_i = 0; B_i < N; B_i++){
       scanf("%d",&B[B_i]);
    }
      for(int i=0;i<N-1;i++)
          {
          if(B[i]%2!=0)
              {
              B[i]++;
              B[i+1]++;
              count+=2;
              }
          
      }
    if(B[N-1]%2!=0)
        printf("NO");
    else
    printf("%d",count);
    return 0;
}
