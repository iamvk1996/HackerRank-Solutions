#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k,x;
    cin >> k;
    for(int i=0;i<n;i++)
        {
        if(s[i]>=97 && s[i]<=122)
        {
            //s[i]+=k%26;
           x=s[i]+k%26;
          //  cout<<x<<endl;
            
            if(x>122)
                {
                //cout<<97+(x-122)-1<<endl;
                s[i]=97+(x-122)-1;
               // cout<<s[i]<<endl;
                }
            else
                s[i]=x;
        }
        else if(s[i]>=65 && s[i]<=90)
                {
                //s[i]+=k%26;
                x=s[i]+k%26;
                if(x>90)
                    {
                    s[i]=65+(x-90)-1;
                    }
                else
                    s[i]=x;
            
        }
    }
    cout<<s;
    return 0;
}
