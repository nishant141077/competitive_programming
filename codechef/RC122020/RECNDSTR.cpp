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
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL (LL(1e18))
#define rep(i, a, n) for(i=a;i<n;i++)
#define rev(i, a, n) for(i=a;i>=n;i--)
#define MSV(A,a) memset(A, a, sizeof(A))
#define rep_itr(itr, c) for(itr = (c).begin(); itr != (c).end(); itr++)

using namespace std;

inline void inp( int &n ) { 
	n=0;    int ch=getcx();int sign=1;   
	while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();} 
	while(  ch >= '0' && ch <= '9' )    
	n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
	n=n*sign;
}

inline void inp1( LL &n ) { 
	n=0;    LL ch=getcx();LL sign=1;   
	while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();} 
	while(  ch >= '0' && ch <= '9' )    
	n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
	n=n*sign;
}

int main() {
	int t;
	string s;
	cin>>t;
	while(t--) {
		cin>>s;
		if(s.length() < 3) {cout<<"YES"<<endl;continue;}
		bool flag = true;
		if(s.length() % 2  != 0) {
			for(int i=1;i<s.length();i++) {
				if(s[i] != s[i-1]) {
					flag = false;
					break;
				}
			}
		} else {
			for(int i=2;i<s.length();i++) {
				if(s[i]!=s[i-2]) {
					flag = false;
					break;
				}
			}
		}
		
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
    return 0;
}

