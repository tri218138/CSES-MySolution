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
	ll n; cin >> n;
	int* num = new int[n - 1];
	ll sum = 0;
	rep(i, 0, n - 1) {
		cin >> num[i];
		sum += num[i];
	}
	cout << n * (n + 1) / 2 - sum << endl;
	delete[] num;
	return 0;
}