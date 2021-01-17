//creating stringsI
#include<bits/stdc++.h>
using namespace std;
void swap(char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b = *a;
}
void permute(string s,int start , int end , set<string>&per)
{
    if(start == end)
    {
        per.insert(s);
        return;
    }
    for(int i = start ; i < end ;i++)
    {
        swap(s[i],s[start]);
        permute(s,start+1,end,per);
        swap(s[i],s[start]);
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    set<string>ans;
    permute(s,0,s.length(),ans);
    cout<<ans.size()<<endl;
    for(string s : ans)
    cout<<s<<endl;

    return 0;
}