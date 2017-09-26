#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   long int n;
    int d,i,j,count=0,t1,t2,index1,index2;
    scanf("%d %d",&n,&d);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n;i++)
        {
        int flag1=0,flag2=0;
        t1=A[i]+d;
        t2=A[i]+2*d;
        for(j=i+1;j<n;j++)
            {
            if(A[j]==t1)
                {
                flag1=flag1+1;
                index1=j;
            }
        }
        for(j=i+1;j<n;j++)
            {
            if(A[j]==t2)
                {
                flag2=flag2+1;
                index2=j;
            }
        }
        if((flag1>=1) && (flag2>=1) && (index2>index1))
            count++;
    }
 printf("%d",count);
    return 0;
}
