//coin piles
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    std::cin >> n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        if(a == 0 && b == 0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(a == 0 || b == 0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if((a+b)%3==0)
        {
            if(a == b)
            cout<<"YES"<<endl;
            else if(a>b && a<=2*b) 
              cout<<"YES"<<endl;
             else if(b>a && b <=2*a)
              cout<<"YES"<<endl;
             else
              cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}