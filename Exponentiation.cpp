//Exponentiation
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll solve(ll a,ll b)
{
    if(b == 0)
    return 1;
    if(a==0)
    return 0;
    if(b%2 == 0)
    return solve((a*a)%mod,b/2)%mod;
    else
    return ((a)%mod)*(solve(a,b-1))%mod;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<solve(a,b)%mod<<endl;
    }
    return 0;
}