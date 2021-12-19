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
	int n; cin >> n;
	vector<ll> apple(n + 1, 0);
    repi(i, 1, n) {
        cin >> apple[i];
    }
	ll sum = accumulate(apple.begin(), apple.end(),0LL);//0LL define sum type longlong
	ll ans = sum;
	for (ll start = 1; start < (ll)1 << n; start++) {
		ll tmp = 0;
		repi(i, 0, n - 1) {
			if ((start >> i) & 1) tmp += apple[i + 1];
		}
		ans = min(ans, abs(sum - tmp - tmp));
	}
	cout << ans;
	return 0;
}