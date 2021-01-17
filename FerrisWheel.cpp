//CSES-Ferris Wheel
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin>>n>>x;
    vector<ll>ferry(n);
    for(int i = 0 ; i < n ; i++)
    cin>>ferry[i];
    sort(ferry.begin(),ferry.end());
    ll counter = 0;
    ll i = 0,j=n-1;
    while(j>=i)
    {
        if(ferry[j]==x)
        {
            counter++;
            j--;
        }
        else
        if(ferry[j]+ferry[i] <= x)
        {
            counter++;
            j--;
            i++;
        }
        else
        {
            counter++;
            j--;
        }
        //cout<<i<<" "<<j<<endl;
    }
    cout<<counter;
    return 0;
    
}