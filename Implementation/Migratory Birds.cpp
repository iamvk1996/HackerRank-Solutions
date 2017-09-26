#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int id;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    int arr[6]={0};
    for(int i=0;i<n;i++)
        {
        arr[types[i]]++;
        }
    int max=arr[1];
    for(int j=1;j<6;j++)
        {
        if(arr[j]>max)
            {
            max=arr[j];
            id=j;
            }
        }
   cout<<id;
    return 0;
}
