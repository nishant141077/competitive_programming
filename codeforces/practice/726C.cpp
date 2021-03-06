/*
	Author : Nishant Gupta 2.0
*/
#include<bits/stdc++.h>
using namespace std;

#define LL long long int
#define getcx getchar_unlocked
#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define MAX 100005
#define LOG_MAX 20
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL (LL(1e18))
#define chk(a) cerr << endl << #a << " : " << a << endl
#define chk2(a,b) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << endl
#define chk3(a,b,c) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << "\t" << #c << " : " << c << endl
#define chk4(a,b,c,d) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << "\t" << #c << " : " << c << "\t" << #d << " : " << d << endl
#define rep(i, a, n) for(i=a;i<n;i++)
#define rev(i, a, n) for(i=a;i>=n;i--)
#define in(x) scanf("%d", &x)
#define inl(x) scanf("%lld", &x)
#define in2(x, y) scanf("%d %d", &x, &y)
#define inl2(x, y) scanf("%lld %lld", &x, &y)
#define MSV(A,a) memset(A, a, sizeof(A))
#define rep_itr(itr, c) for(itr = (c).begin(); itr != (c).end(); itr++)
#define finish(x) {cout<<x<<'\n'; return;}
typedef pair<int, int> pi;
typedef pair<LL, LL> pl;
const char en = '\n';

void solve() {
	int n, i, j; in(n);
	vector<int> v(n);
	rep(i, 0, n) in(v[i]);

	sort(v.begin(), v.end());
	int mini = INT_MAX;
	rep(i, 1, n) {
		if (mini > (v[i] - v[i - 1])) mini = v[i] - v[i - 1];
	}

	int i1, i2, maxi = -1;
	rep(i, 1, n) {
		if (mini == (v[i] - v[i - 1])) {
			//compute difficulty
			int h = v[i], l = v[i - 1];
			int x = upper_bound(v.begin(), v.end(), h) - v.begin();
			int curr = x - 2;
			curr += (n - x);
			if (curr > maxi) {
				i1 = i - 1; i2 = i;
				maxi = curr;
			}
		}
	}

	vector<int> ans(n);
	ans[0] = v[i1];
	ans[n - 1] = v[i2];
	int x = upper_bound(v.begin(), v.end(), ans[n - 1]) - v.begin();

	int s = x;
	int idx = 1;
	while (s < n) {
		ans[idx++] = v[s++];
	}

	rep(i, 0, x) {
		if (i != i1 && i != i2) {
			ans[idx++] = v[i];
		}
	}

	rep(i, 0, ans.size()) {
		cout << ans[i] << " ";
	}
	cout << en;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;

	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}