//sum of three values
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x; 
    cin >> n >> x;
    vector<pair<int, int>> arr;
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        pair<int, int> p; p.first = a; p.second = i; 
        // first in pair represents value, second represents index
        arr.push_back(p);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++){
        int l, r;
        l = 0; r = n-1;
        while(l != r){
            int target;
            target = x - arr[i].first;
            if(l != i && r != i && arr[l].first + arr[r].first == target){
                cout << arr[i].second << " " << arr[l].second
                     << " " << arr[r].second << endl;
                return 0;
            }
            if(arr[l].first + arr[r].first < target){
                l++;
            }
            else{
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}