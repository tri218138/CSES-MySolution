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
	ll n; cin >> n;
	if (n * (n + 1) / 2 % 2 == 1) cout << "NO\n";
	else {
		ll target = n * (n + 1) / 4;
		//1 2 3| 4| 5 6 7| 8| 9 10 11| 12|
		if (n % 4 == 0) {
			cout << n / 2 << '\n';
			for (ll i = 1; i <= n / 4; i++) {
				cout << i << ' ' << n - (i - 1) << ' ';
			}
			cout << '\n' <<  n / 2 << '\n';
			for (ll i = n / 4 + 1; i <= n / 2; i++) {
				cout << i << ' ' << n - (i - 1) << ' ';
			}
		}
		else {
			n++;
			cout << n / 2 << '\n';
			for (ll i = 1; i <= n / 4; i++) {
				cout << i << ' ';
				if (n - (i - 1) == n) cout << n / 2 << ' ';
				else cout << n - (i - 1) << ' ';
			}
			cout << '\n' << n / 2 - 1 << '\n';
			for (ll i = n / 4 + 1; i <= n / 2; i++) {
				if (i != n / 2) cout << i << ' ';
				cout << n - (i - 1) << ' ';
			}
		}
	}
	return 0;
}