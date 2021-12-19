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
	int q; cin >> q;
	//956260961344358401
	while (q--) {
		ll int k; cin >> k;
		ll int exp = 0;
		ll int ten = 1;
		while (k > (ll int) 9 * (exp + 1) * ten) {
			//cout << 9 * (exp + 1) * ten << '\n';
			k -= (ll int) 9 * (exp + 1) * ten;
			exp++;
			ten *= 10;
		}
		//cout << 9 * (exp + 1) * ten << '\n';
		//start from ten with rest-length = k;
		//10 11 12 13
		string str = to_string(ten);
		ll int n = str.length();
		k--;
		ll int lo = k / n;
		ll int hi = k % n;
		ten += lo;
		string res = to_string(ten);
		cout << res[hi] << '\n';
	}
	return 0;
}