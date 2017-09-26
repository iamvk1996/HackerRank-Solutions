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
    int n;
    cin >> n;
    int p;
    cin >> p;
    int count=0;
    int near1=p-1,near2=n-p;
    if(near1<near2)
        {
        for(int i=1;i<p;i+=2)
            {
            count++;
            }
        cout<<count;
        }
    else if(near2<=near1)
        {
        for(int j=n;j>p+1;j-=2)
            {
            count++;
            }
        if(n%2==0 && p%2!=0)
            cout<<count+1;
        else
            cout<<count;
        }
    return 0;
}
