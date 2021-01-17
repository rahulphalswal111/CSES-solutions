#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    int max_count = INT_MIN;
    int counter = 1;
    if(s.length() == 1)
    {
    cout<<counter;
    return 0;
    }
    for(int i = 1 ; i < s.length() ; i++)
    {
        if(s[i] == s[i-1])
        counter++;
        else
        counter = 1;
        max_count = max(max_count,counter);
    }
    cout<<max_count;
    return 0;
}