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

double get_angle(double h, double m)  {    
    if (h == 12) h = 0;  
    if (m == 60) m = 0;  
  
    double ha = 0.5 * (h * 60 + m);  
    double ma = 6 * m;  
  
    double ang = abs(ha - ma);  
    ang = min(360 - ang, ang);  
    return ang;
}  

int main() {
	double a, b, h, m;
	double pi = 3.141592653589793238;
	cin>>a>>b>>h>>m;
	
	double angle = get_angle(h, m) * pi / 180 ;
	double csq = a*a + b*b - 2*a*b*cos(angle);
	printf("%.9lf\n", sqrt(csq));
    return 0;
}

