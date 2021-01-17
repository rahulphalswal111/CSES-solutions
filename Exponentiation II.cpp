// C++ program to find (a^b) mod m for a large 'a' 
#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
#define mod 1000000007

// Iterative Function to calculate (x^y)%p in O(log y) 
ll power(ll x, ll y, ll p) 
{ 
	ll res = 1;	 // Initialize result 

	x = x % p; // Update x if it is more than or 
				// equal to p 

	while (y > 0) 
	{ 
		// If y is odd, multiply x with result 
		if (y & 1) 
			res = (res*x) % p; 

		// y must be even now 
		y = y>>1; // y = y/2 
		x = (x*x) % p; 
	} 
	return res; 
} 

ll Calculate(ll A, ll B, ll C, ll M) 
{ 
	ll res, ans; 

	// Calculate B ^ C (mod M - 1) 
	res = power(B, C, M-1); 

	// Calculate A ^ res ( mod M ) 
	ans = power(A, res, M); 

	return ans; 
} 

// Driver program to run the case 
int main() 
{ // M must be be a Prime Number 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
	ll A,B,C;
	cin>>A>>B>>C;

	cout << Calculate(A, B, C, mod)<<endl; 
    }

	return 0; 
} 
