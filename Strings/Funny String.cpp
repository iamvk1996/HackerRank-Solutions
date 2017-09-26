#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
        {
        string str;
        cin>>str;
        int flag=0;
        for(int i=0,j=str.length()-1;i<str.length()-1;i++,j--)
            {
            if(abs(str[i]-str[i+1])!=abs(str[j-1]-str[j]))
               {
               flag++;
                   break;
               }
        }
        if(flag==1)
            cout<<"Not Funny"<<endl;
        else 
            cout<<"Funny"<<endl;
    }
    return 0;
}
