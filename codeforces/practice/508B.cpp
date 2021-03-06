/*
    Author : Nishant Gupta 2.0
*/
#include<bits/stdc++.h>

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
#define MSV(A,a) memset(A, a, sizeof(A))
#define rep_itr(itr, c) for(itr = (c).begin(); itr != (c).end(); itr++)

using namespace std;

int main() {
	LL n;
	cin>>n;
	
	LL sum = (n*(n+1)) >>1;
	
	int div = -1;
	for(int i=2;i<=n;i++) {
		if(sum % i == 0) {
			div = i;
			break;
		} 
	}
	
	if(div == -1) {
		cout<<"No"<<endl;
	}
	else {
		cout<<"Yes"<<endl;
		cout<<"1 "<<div<<endl;
		cout<<n-1<<" ";
		
		for(int i=1;i<=n;i++) if(i != div) cout<<i<<" ";
		cout<<endl;
	}

    return 0;
}

