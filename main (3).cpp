#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll temp,sum = 0,sum1 = 0;
    for(int i = 1 ; i < n ; i++)
    {
        cin>>temp;
        sum1 += temp;
    }
    sum = ((n)*(n+1))/2;
    cout<<(sum - sum1);
    return 0;
}