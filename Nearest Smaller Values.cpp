//Nearest Smaller Values
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    stack<ll>st;
    vector<ll>arr(n,0);
    for(int i = 0 ; i < n ; i++)
    cin>>arr[i];
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            cout<<i<<" ";
            st.push(i);
        }
        else
        {
            if(!st.empty() && arr[i] > arr[st.top()])
            {
                cout<<st.top()+1<<" ";
                //if(arr[i]!=arr[st.top()])
                st.push(i);
            }
            else
            {
                while( !st.empty() && arr[i] < arr[st.top()])
                st.pop();
                if(st.empty() || arr[i] == arr[st.top()] )
                cout<<0<<" ";
                else
                cout<<st.top()+1<<" ";
                //if(st.empty())
                st.push(i);
            }
        }
    }
    return 0;
}