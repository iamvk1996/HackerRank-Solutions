#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k,a[100000],c;
    int sum=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&c);
    for(int i=0;i<n;i++)
        if(i!=k)
        sum=sum+a[i];
    sum=sum/2;
    if((c-sum)==0)
        printf("Bon Appetit\n");
    else 
        printf("%d",(c-sum));
    return 0;
}
