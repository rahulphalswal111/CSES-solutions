#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1000000007;
ll cal_pow(ll x,ll n)
{
    if(n == 1)
    return x;
    if(n == 0)
    return 1;
    if(n%2 == 0)
    return ((cal_pow(x,n/2)%mod)*(cal_pow(x,n/2)%mod))%mod;
    else
    return (x*cal_pow(x,n-1))%mod;
}
int main()
{
    int n;
    cin>>n;
    ll power = cal_pow(2,n);
    //cout<<power<<" ";
    ll counter = power % mod; 
    cout<<counter;
    return 0;
}