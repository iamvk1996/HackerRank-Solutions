#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int c=0;
    int count[26]={0};
    for(int i=0;i<n;i++)
        {
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++)
            {
            if((count[s[j]-'a'])<(i+1) && (count[s[j]-'a'])>(i-1))
               count[s[j]-'a']++; 
            }
        }
    for(int i=0;i<26;i++)
       // {cout<<count[i]<<"\t";}
    
        if(count[i]==n)
         c++;
        
     cout<<c;
    return 0;
}
