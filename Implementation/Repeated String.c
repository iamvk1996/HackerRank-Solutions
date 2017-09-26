#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    long n,tot;
    int count=0,count2=0; 
    scanf("%ld",&n);
    int len=strlen(s);
    for(int i=0;i<len;i++)
        {
        if(s[i]=='a')
            count++;
    }
    long int q=n/len;
    if(n%len==0)
        tot=q*count;
    else
        {
        int rem=n%len;
        for(int i=0;i<rem;i++)
            if(s[i]=='a')
            count2++;
            tot=q*count+count2;
    }
    printf("%ld",tot);
    return 0;
}
