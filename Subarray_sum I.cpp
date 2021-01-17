//CSES Subarray Sums I
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,x;
    cin>>n>>x;
    ll arr[n] = {0};
    for(int i = 0 ; i < n ; i++)
    cin>>arr[i];
    set<ll>check;
    ll counter = 0,sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
        check.insert(sum);
        //cout<<i<<" "<<sum<<" "<<sum-x<<endl;
        if((arr[i] == x || sum == x )|| check.find(sum-x) != check.end() )
        counter++;
    }
    cout<<counter<<endl;
    return 0;
}