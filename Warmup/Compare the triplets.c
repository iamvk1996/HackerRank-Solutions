#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int A0=0,A2=0,A1=0,B0=0,B2=0,B1=0;
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    if(a0>b0)
        A0=1;
    else if(b0>a0)
        B0=1;
        else
        A0=B0=0;
        if(a1>b1)
        A1=1;
    else if(b1>a1)
        B1=1;
        else
        A1=B1=0;
         if(a2>b2)
        A2=1;
    else if(b2>a2)
        B2=1;
        else
        A2=B2=0;
        printf("%d %d",A1+A2+A0,B1+B2+B0);
    return 0;
}
