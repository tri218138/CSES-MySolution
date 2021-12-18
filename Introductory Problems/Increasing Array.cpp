#include<vector>
#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<map>
#include<queue>
#include<cmath>
#include<set>
#include<stack>
#include<bitset>
#include<numeric>
#include<unordered_map>
using namespace std;

#define ll long long
#define vi	vector<int>
#define vll	vector<ll>
#define	rep(i,a,b) for(int i = a; i < b; i++)
#define	repi(i,a,b) for(int i = a; i <= b; i++)
#define ff first
#define ss second
#define pii	pair<int,int>
#define pci	pair<char,int>
const int MOD = 1e9 + 7;
int main() {
	int n; cin >> n;
	vector<int> vt(n + 1);
	repi(i, 1, n) cin >> vt[i];
	int curHeight = vt[1];
	ll total = 0;
	repi(i, 2, n) {
		if (vt[i] < curHeight) {
			total += (ll) curHeight - vt[i];
		}
		else {
			curHeight = vt[i];
		}
	}
	cout << total << endl;
	return 0;
}