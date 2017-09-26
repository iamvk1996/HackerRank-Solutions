#include <bits/stdc++.h>

using namespace std;

int main(){
    char hack[]="hackerrank";
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int counter=0;
        for(int i=0;i<s.length();i++ && counter!=10)
            if(s[i]==hack[counter])
            counter++;
    
    if(counter==10)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
    return 0;
}
