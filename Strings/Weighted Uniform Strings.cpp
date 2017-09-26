#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin>>s;
    int n;
    int flag;
    int len=s.length();
    map<int,int>weight;
    char ch;
    cin >> n;
    
        long sum;
        int count=0;
        for(int i=0,j=0;i<s.length();i++)
            {
            if(s[i]==s[i+1])
                {
               // weight[j]=(s[i]-'a')+1;
                ch=s[i];
                sum=0;
                while(s[i]==ch)
                    {
                    
                    sum=sum+(s[i]-'a')+1;
                    weight[sum]=1;
                    //weight.push_back(sum);
                     //weight[j]=sum;
                    j++;
                    count++;
                    i++;
                    }
               // j++;
                    i--;
                //count++;
                
                }
            else
                {
                sum=(s[i]-'a')+1;
                weight[sum]=1;
                //weight.push_back();
                //weight[j]=(s[i]-'a')+1;
                
                }
          //  cout<<"s[i]="<<s[i]<<endl;
            }
        //cout<<"count"<<count<<endl;
        /*for(int b=0;b<count;b++)
            cout<<weight[b]<<"\t";*/
         
    
    for(int a0 = 0; a0 < n; a0++){
        
        int x;
        cin >> x; 
        /*for(int l=0;l<weight.size();l++)
                {
            flag=0;
                if(weight[l]==x)
                    {
                    flag++;
                    break;
                    }
                }
        if(flag==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";*/
        map<int,int>::iterator it;
        it=weight.find(x);
        if(it!=weight.end())
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
    return 0;
}
