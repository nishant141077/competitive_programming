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
#define MAX 20000005
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

int get_ans(int num) {
	int ans = 0;
	while(num) {
		if((num & (num+1)) == 0) {
			ans++;
			num = 0;
			return ans;
		}
		int b = log2(num);
		int x = (1<<b) - 1;
		ans++;
		num -= (x+1);
	}
	return ans+1;
}
void solve() {
	int x, y;in2(x, y);
	int ansx = get_ans(x);
	int ansy = get_ans(y);
		
	if(ansx == ansy) finish("0 0");
	
	if(ansx < ansy) cout<<"1 "<<ansy-ansx<<en;
	else cout<<"2 "<<ansx-ansy<<en;
}

int main() {
	int t = 1;
	//pre();
	cin>>t;
	while(t--) {
		solve();
	}
    return 0;
}
