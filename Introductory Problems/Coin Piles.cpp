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
		int a, b; cin >> a >> b;
		if (a < b) swap(a, b);
		//a max, b min
		if (a - b <= b && (a + b) % 3 == 0) {
			cout << "YES" << '\n';
		}
		else cout << "NO" << '\n';
	}
	return 0;
}