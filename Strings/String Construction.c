#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,x,y;
    long int len,i,j;
    int price,a0;
    scanf("%d",&n);
    for(a0 = 0; a0 < n; a0++){
        char* s = (char *)malloc(102400 * sizeof(char));
        scanf("%s",s);
    len=strlen(s);
    int* Rate = (int *)malloc(102400 * sizeof(int));
    Rate[0]=1;
   long int k=1;
    for(i=1;i<len;i++)
        {
            y=s[i];
        price=0;
        for(j=0;j<=i-1;j++)
            {
                x=s[j];
            if(x==y)
                {
                price=0;
                break;
            }
            else
                {
                price=price+1;
            }
        }
            if(price==0)
                {
                Rate[k]=0;
            k++;
            }
            else{
                Rate[k]=1;
                k++;
            }
    }
  //  for(i=0;i<k;i++)
  //  printf("%d\n",Rate[i]);
  long int sum=0;
    for(i=0;i<k;i++)
        sum=sum+Rate[i];
    printf("%ld\n",sum);
    }
    return 0;
}
