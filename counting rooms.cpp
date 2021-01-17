//CSES-Counting Rooms
#include<bits/stdc++.h>
using namespace std;
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};
bool isValid(int x,int y,vector<vector<char>>&graph,int n,int m)
{
    return (x>=0 && y>=0 && x < n && y < m && graph[x][y] !='#');
}
void dfs(int x,int y,vector<vector<char>>&graph,int n,int m)
{
    //check validity
    if(!isValid(x,y,graph,n,m))
    return;
    graph[x][y] = '#';
    //traverse on each side of the cell
    for(int i = 0 ; i < 4 ;i++)
    {
        dfs(x+dx[i],y+dy[i],graph,n,m);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<char>>graph(n,vector<char>(m,'.'));
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        cin>>graph[i][j];
    }
    //Now travserse the graph and store all the '.' except the boundary ones
    int room_count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0; j < m ; j++)
        {
            if(graph[i][j] == '.')
            {
            dfs(i,j,graph,n,m);
                room_count++;
            }
        }
    }
    cout<<room_count<<endl;
    return 0;
}