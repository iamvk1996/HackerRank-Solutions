#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int d1; 
    int m1; 
    int y1; 
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2; 
    int m2; 
    int y2; 
    int fine;
    scanf("%d %d %d",&d2,&m2,&y2);
    if(y1<y2)
        fine=0;
    else if(y1==y2 && m1<m2)
        fine=0;
    else if(y1==y2 && m1==m2 && d1<d2)
        fine=0;
    else if(y1==y2 && m1==m2 && d1==d2)
        fine=0;
    else if(y1==y2 && m1==m2 && d1!=d2)
        fine=(d1-d2)*15;
    else if(y1==y2 && m1!=m2 && d1!=d2)
        fine=(m1-m2)*500;
    else 
        fine=10000;
    printf("%d",fine);
    return 0;
}
