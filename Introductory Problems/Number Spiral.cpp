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
int main() {
	int t; cin >> t;
	while (t--) {
		ll x, y; cin >> x >> y;
		//on diagonal (x,x)
		if (x >= y) {
			ll centreX = 1 + x * (x - 1);
			if (x % 2 == 0)	cout << centreX + (x - y) << '\n';
			else cout << centreX - (x - y) << '\n';
		}
		else {
			ll centreY = 1 + y * (y - 1);
			if (y % 2 == 0 ) cout << centreY - (y - x) << '\n';
			else cout << centreY + (y - x) << '\n';
		}		
	}
	return 0;
}