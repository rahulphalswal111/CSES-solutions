//maximum subarray sum     Kadane's algorithm O(n)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>arr(n,0);
    for(ll i  = 0 ; i < n; i++)
    cin>>arr[i];
    ll max_sum = INT_MIN, max_ending_here = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        max_ending_here += arr[i];
        if(max_sum < max_ending_here)
        max_sum = max_ending_here;
        if(max_ending_here < 0)
        max_ending_here = 0;
    }
    std::cout << max_sum << std::endl;
    return 0;
}