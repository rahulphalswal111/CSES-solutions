#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1000000007;
int main()
{
    int n;
    cin>>n;
    ll power = pow(2,n);
    ll counter = power % mod; 
    cout<<counter;
    return 0;
}