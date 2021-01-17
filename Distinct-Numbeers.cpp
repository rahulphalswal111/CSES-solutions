//CSES-Distinct Numbers
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    set<ll>temp;
    ll a;
    for(ll i = 0 ; i < t ; i++)
    {
        cin>>a;
        temp.insert(a);
    }
    cout<<temp.size();
    return 0;
}