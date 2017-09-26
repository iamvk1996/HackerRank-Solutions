#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    int n,m,s,i;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%d %d %d",&n,&m,&s);
        m=m%n;
        if(m==0)
            m=n;
        
        if((s+m-1)<=n)
            printf("%d\n",(s+m-1));
        else
            printf("%d\n",(s+m-1-n));
        }
    return 0;
}
