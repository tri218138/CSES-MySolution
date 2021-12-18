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
	unordered_map<char, int> fr;
	for (auto c : s) {
		fr[c]++;
	}
	//more than 1 odd frequent
	int cntOdd = 0;
	char chOdd = 'a';
	for (auto i : fr) {
		if (i.second % 2 == 1) {
			chOdd = i.first;
			cntOdd++;
		}
	}
	int len = s.length();
	if (len % 2 == 0 && cntOdd > 0) cout << "NO SOLUTION\n";
	else if (cntOdd > 1) cout << "NO SOLUTION\n";
	else {
		string res = (chOdd == 'a' ? "" : (string)"" + chOdd);
		for (auto i : fr) {
			int half = i.second / 2;
			string append = (string)"";
			for (int r = 0; r < half; r++) {
				append.push_back(i.first);
			}
			res = append + res + append;
		}
		cout << res << '\n';
	}	
	return 0;
}