//CSES - Apple Divison
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void backtrack(vector<ll>&temp,ll &min1,ll take_f,ll take_s,int start,int end)
{
    if(start == end)
    {
        min1 = min(min1,abs(take_f-take_s));
        return;
    }
    if(start > end)
    return ;
    backtrack(temp,min1,take_f+temp[start],take_s,start+1,end);
    take_f-temp[start];
    backtrack(temp,min1,take_f,take_s+temp[start],start+1,end);
    
}
int main()
{
    int t;
    cin>>t;
    vector<ll>temp(t);
    for(int i = 0 ; i < t ; i++)
    cin>>temp[i];
    ll min1 = INT_MAX;
    backtrack(temp,min1,0,0,0,t);
    cout<<min1;
}