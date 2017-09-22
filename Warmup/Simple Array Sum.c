#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,arr_i,j,sum=0; 
    scanf("%d\n",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d\t",&arr[arr_i]);
    }
    for(j=0;j<n;j++)
        {
        sum=sum+arr[j];
    }
    printf("%d",sum);
    return 0;
}
