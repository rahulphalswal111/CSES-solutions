//CSES Gray code
#include<bits/stdc++.h>
using namespace std;
int dtob(int n, int x)
{
    int bin[31] = {0};
    int i = 0;
    while(n)
    {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }
    for(int j = x-1 ; j >= 0; j--)
    cout<<bin[j];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0 ; i < 1<<n ; i++)
    {
        dtob(i^(i>>1) , n);
        cout<<endl;
    }
    return 0;
}