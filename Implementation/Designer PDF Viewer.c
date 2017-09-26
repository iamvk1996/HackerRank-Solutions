#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int *h = malloc(sizeof(int) * 26);
    for(int h_i = 0; h_i < 26; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int len=strlen(s);
    int ht=h[s[0]-'a'];
    for(int i=1;i<len;i++)
        {
        if(h[s[i]-'a']>ht)
            ht=h[s[i]-'a'];
        }
    int area=len*ht;
    printf("%d",area);
    return 0;
}
