#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    int t;
    unsigned long count,flag;
    scanf("%d",&t);
    while(t--)
     {  
      count=0;
      flag=0;
      unsigned long a,b,i;
        scanf("%ld %ld",&a,&b);
        
        for(i=a;i<=b;i++)
            {
            unsigned long j=sqrt(i);
            //printf("i=%lu and j=%lu\n",i,j);
            if(j*j==i)
                {
                flag=sqrt(i);
                break;
                }
           // printf("flag=%lu\n",flag);
            }
           //printf("%lu\n",flag);
        
        if(flag!=0)
            {
      while((flag*flag)<=b)
        {
             count++;
             flag++;
       }
        }
        if(flag==0)
            printf("0\n");
        else 
        printf("%lu\n",count);
     }   
    return 0;
}
