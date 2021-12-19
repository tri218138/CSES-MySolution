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
vector<vector<char>> mp(9, vector<char>(9));
int col[9] = { -1,-1,-1,-1,-1,-1,-1,-1,-1 };
int cnt = 0;
void arrangeBoard(int t) {
	if (t == 9) {
		bool ok = true;
		repi(i, 1, 8) {
			if (mp[i][col[i]] == '*') ok = false;
		}
		if (ok) cnt++;
	}
	else {
		for (int c = 1; c <= 8; c++) {
			bool ok = true;
			for (int i = 1; i < t; i++) {
				if ((col[i] == c) || (abs(col[i] - c)  == abs(t - i))) ok = false;
			}
			if (ok) {
				col[t] = c;
				arrangeBoard(t + 1);
			}
		}
	}
}
int main() {
	repi(i, 1, 8) {
		repi(j, 1, 8) {
			cin >> mp[i][j];
		}
	}
	arrangeBoard(1);
	cout << cnt;
	return 0;
}