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
	long long n; cin >> n;
	while (n != 1) {
		cout << n << ' ';
		if (n % 2 == 0) n /= 2;
		else n = 3 * n + 1;
	}
	cout << 1 << endl;
	return 0;
}