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
	string s; cin >> s;
	sort(s.begin(), s.end());
	string tmp = s;
	int cnt = 0;
	do {
		cnt++;
	} while (next_permutation(s.begin(), s.end()));
	cout << cnt << '\n';
	do {
		cout << s << '\n';
	} while (next_permutation(s.begin(), s.end()));
	return 0;
}