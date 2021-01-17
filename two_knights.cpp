//two knights(ghode)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fun(ll a)
{
    //no.of ways to place one knight(a*a)
    //places left for the other knight = (a*a-1)
    //now subtract all possible attacking positions and divide them by 2 because knights can replace each other
    return ((a*a)*(a*a-1)- 8-24-(a-4)*16-16-24*(a-4) - 8*(a-4)*(a-4))/2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(int i = 1 ; i<= n ; i++)
    {
        cout<<fun(i)<<endl;
    }
}