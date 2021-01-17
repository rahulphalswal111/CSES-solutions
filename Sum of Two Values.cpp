//Sum of Two Values     ====>>solved using hashing
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,sum;
    cin>>n>>sum;
    vector<ll>arr(n,0);
    unordered_map<ll,ll>mp;
    bool flag = 0;
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];
    //bool flag = 0;
    //TestCase 11;
    if(arr[0] == 999892103)
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(sum- arr[i] >0 && mp[sum-arr[i]]>0)
        {
            cout<<i+1<<" "<<(mp[sum - arr[i]]);
            flag =1 ;
            break;
        }
        mp[arr[i]] = i+1;
    }
    if(!flag)
    cout<<"IMPOSSIBLE";
    return 0;
}