#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
    int x,i;
    x=(time[0]-'0')*10+(time[1]-'0')+12;
        if(time[8]=='A'&&time[0]!='1'&&time[1]!='2')
            {
            time[8]='\0';
            time[9]='\0';
            printf("%s",time);
        }
    
    else if(time[8]=='P'&&x!=24)
        {
        
        printf("%d",x);
        for(i=2;i<8;i++){
            printf("%c",time[i]);
        }
    }
        
    else if(time[8]=='A'&&time[0]=='1'&&time[1]=='2')
        {
       printf("00");
        for(i=2;i<8;i++){
            printf("%c",time[i]);
            
           //printf("%s",time);
    }
    }
        else if(x==24){
            for(i=0;i<8;i++){
            printf("%c",time[i]);
        }
        }
    
    else
        {
        time[8]='\0';
        time[9]='\0';
        printf("%s",time);   
    }
    return 0;
}
