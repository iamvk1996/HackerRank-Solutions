#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int st=5,tot=0,mul;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
        mul=st/2;
        tot=tot+mul;
        st=mul*3;
    }
    printf("%d",tot);
    return 0;
}
