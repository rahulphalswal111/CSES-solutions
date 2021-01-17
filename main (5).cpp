#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>temp(n);
    for(int i = 0 ; i < n ; i++)
    cin>>temp[i];
    if(n == 1)
    {
        cout<<"0";
        return 0;
    }
    ll counter = 0;
    for(int i = 1 ; i < n ;i++)
    {
        if(temp[i] < temp[i-1])
        {
            counter += abs(temp[i]-temp[i-1]);
            temp[i] += abs(temp[i]-temp[i-1]);
        }
    }
    cout<<counter;
    return 0;
}