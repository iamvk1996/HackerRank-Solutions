#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int m; 
    scanf("%d %d",&n,&m);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for(int b_i = 0; b_i < m; b_i++){
       scanf("%d",&b[b_i]);
    }
    int flag=0;
    for(int i=a[0];i<=b[m-1];i++)
        {
        int count1=0,count2=0;
        for(int j=0;j<n;j++)
            if(i%a[j]==0)
            count1++;
       for(int k=0;k<m;k++)
            if(b[k]%i==0)
            count2++;
       if((m+n)==(count1+count2))
            flag++;
    }
    printf("%d",flag);
    return 0;
}
