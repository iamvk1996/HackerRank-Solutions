#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char arr[100];
int top=-1;


void push(char x)
    {
    top++;
    arr[top]=x;
    }


void pop()
    {
   // y=arr[top];
    top--;
    }



int main() {
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
        {
        if(top==-1)
            push(str[i]);
        else if(str[i]==arr[top])
            pop();
        else
            push(str[i]);
        }
    if(top==-1)
        cout<<"Empty String\n";
    else
        {
        for(int j=0;j<=top;j++)
            cout<<arr[j];
        }
    return 0;
}
