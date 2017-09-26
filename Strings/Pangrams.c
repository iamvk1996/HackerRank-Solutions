#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main() {

    int arr[26]={0};char ch;
    int flag=0;
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%[^\n]s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
        {
        if(s[i]!=' ')
            {
            if(s[i]>=97 && s[i]<=122)
                arr[s[i]-'a']++;
            else
                arr[s[i]-'A']++;
        }
            //ch=s[i];
            //ch=tolower(ch);
           // arr[ch-'a']++;
        }
    //for(int i=0;i<26;i++)
    //  printf("%d\t",arr[i]);
    for(int i=0;i<26;i++)
        {
        if(arr[i]==0)
            {
            printf("not pangram");
            flag=1;
            break;
            }
    }
    if(flag==0)
        printf("pangram");
    return 0;
}
