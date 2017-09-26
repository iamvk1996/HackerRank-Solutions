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
    string S;
    cin >> S;
    int i=0;
    int count=0;
    while(i<S.length())
    {
        if(S[i]!='S')
            count++;
        i+=3;
    }
    i=1;
    while(i<S.length())
    {
        if(S[i]!='O')
         count++;
        i+=3;
    }
    i=2;
    while(i<S.length())
    {
        if(S[i]!='S')
            count++;
        i+=3;
    }
    cout<<count;
        return 0;
}
