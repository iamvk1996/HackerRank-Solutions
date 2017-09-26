#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   char s[100002];
    int x;
    long int n;
    scanf("%s",s);
   // printf("%s\n",s);
    n=strlen(s);
   // printf("%ld\n",n);
    long int i,count=0;
    for(i=0;i<n;i++)
        {
        x=s[i];
       // printf("%d\n",x);
    if(x>=65 && x<=90)
        count++;
    }
    printf("%ld",count+1);
    return 0;
}
