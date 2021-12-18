#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi	vector<int>
#define vll	vector<ll>
#define	rep(i,a,b) for(int i = a; i < (int) b; i++)
#define	repi(i,a,b) for(int i = a; i <= (int) b; i++)
#define ff first
#define ss second
#define pii	pair<int,int>
#define pci	pair<char,int>
const int MOD = 1e9 + 7;
ll power(ll x, ll y) {
	ll res = 1;
	x = x % MOD;
	while (y > 0) {
		if (y & 1)res = (res * x) % MOD;
		y = y >> 1;
		x = (x * x) % MOD;
	}
	return res;
}
int main() {
	int n; cin >> n;
	//2^n
	cout << power(2, n);
	return 0;
}