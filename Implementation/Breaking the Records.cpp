#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    int count1=0,count2=0;
    int max=score[0];
    int min=score[0];
    for(int i=1;i<n;i++)
        {
        if(score[i]>max)
            {
            max=score[i];
            count1++;
            }
        else if(score[i]<min)
            {
            min=score[i];
            count2++;
            }
       }
        cout<<count1<<"\t"<<count2;
    return 0;
}
