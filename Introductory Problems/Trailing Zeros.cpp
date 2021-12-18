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
	int exp = 5;
	int cnt5 = 0;
	while (exp <= n) {
		cnt5 += n / exp;
		exp *= 5;
	}
	cout << cnt5 << '\n';
	return 0;
}