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
	string s; cin >> s;
	int maxx = 0;
	for (int i = 0; i < (int)s.length(); i++) {
		int cnt = 0;
		char sample = s[i];
		do {
			cnt++;
			i++;
			if (i == (int)s.length()) break;
		} while (s[i] == sample); i--;
		maxx = max(maxx, cnt);
	}
	cout << maxx << endl;
	return 0;
}