#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,k,n,rem,count=0;
    scanf("%d %d %d",&i,&j,&k);
    for(int c=i;c<=j;c++)
        {
        n=c;
        int sum=0;
        while(n>0)
            {
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;
        }
        if(abs(c-sum)%k==0)
            count++;
    }
    printf("%d",count);
    return 0;
}
