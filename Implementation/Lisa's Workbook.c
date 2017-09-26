#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k;
    scanf("%d %d",&n,&k);
    int pages[n+1];
    int p=1;
    int count=0;
    for(int i=1;i<=n;i++)
        {
        scanf("%d",&pages[i]);
        }
    for(int i=1;i<=n;i++)
        {
        for(int q=1;q<=pages[i];q++)
            {
            if(q==p)
                count++;
            if(q%k==0 && q!=pages[i])
                p++;
        }
        p++;
    }
    
    printf("%d",count);
    
    return 0;
}
