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
	int size = 1 << n;
	vector<int> grayCode;
	grayCode.push_back(0);
	grayCode.push_back(1);
	for (int i = 1; i < n; i++) {
		vector<int> ap_grayCode;
		int dist = 1 << i;//2 4 8 16
		for (int r = grayCode.size() - 1; r >= 0; r--) {
			ap_grayCode.push_back(grayCode[r] + dist);
		}
		grayCode.insert(grayCode.end(), ap_grayCode.begin(), ap_grayCode.end());
	}
	for (auto i : grayCode) {		
		bitset<16> b(i);
		string tmp = b.to_string();
		tmp.erase(0, tmp.length() - n);
		cout << tmp << '\n';
	}
	return 0;
}