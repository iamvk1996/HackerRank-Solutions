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
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int k; 
    scanf("%d",&k);
    int len1=strlen(s);
    int len2=strlen(t);
    
    
    if((len1+len2)<=k)   /*I was using (2*len1<=k), which does not work if input is aaa
                                                                                    a
                                                                                    5*/
        {
        printf("Yes");
       
    }
        else
        {
       int i=0,count=0;
       while(s[i]==t[i])
        {
        count++;
           i++;   /*I forgot to increment i in the first go ,   so plz always increase counter when using while*/ 
        }   
        int tot1=0;
        for(int j=count;j<len1;j++)
            tot1++;
        for(int k=count;k<len2;k++)
            tot1++;
        if(k%2==0)
            {
            if((tot1%2==0) && (tot1<=k))
               printf("Yes");
               else 
               printf("No");
        }
        else
            {
            if((tot1%2==1) && (tot1<=k))
                printf("Yes");
               else
                   printf("No");
        }
        
    }
    return 0;
}
