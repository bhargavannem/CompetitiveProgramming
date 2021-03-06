/// Containers Start 
#include <iostream> 
#include <string> 
#include <set> 
#include <map> 
#include <stack> 
#include <queue> 
#include <vector> 
#include <utility> 
#include <iomanip> 
#include <sstream> 
#include <bitset> 
#include <cstdlib> 
#include <iterator> 
#include <algorithm> 
/// C Header Files 
#include <cstdio> 
#include <cctype> 
#include <cmath> 
#include <math.h> 
#include <ctime> 
#include <cstring> 
/// Containers End 
 
 
using namespace std; 
 
/// Math Start 
#define PI                    acos(-1.0) 
#define Pi                    3.141592653589793 
#define SQR(n)                ( n * n ) 
/// Math End 
 
 
/// Pair Start 
#define ff                    first 
#define ss                    second 
#define mp                    make_pair 
/// Pair End 
 
 
/// Array Start 
#define SET(a)                memset( a, -1,    sizeof a ) 
#define CLR(a)                memset( a,  0,    sizeof a ) 
#define MEM(a,val)            memset( a,  val,  sizeof(a) ) 
/// Array End 
 
 
/// Extra Start 
#define nn                    '\n' 
#define pb                    push_back 
#define SS                    stringstream 
#define ull                   unsigned long long 
#define mod                   1000000007 
#define INF                   2147483647 
#define SIZE                  2000001 
#define _cin                  ios_base::sync_with_stdio(0);  cin.tie(0); 
#define sz(a)                 int((a).size()) 
#define space                 " " 
#define all(x)                (x).begin(), (x).end() 
#define Ignore                cin.ignore() 
#define StringToInt           if ( ! (istringstream(s) >> n) ) n = 0; 
/// Extra End 
 
 
/// Functions Start 
 template < class T > T Multiply( T a, T b ){return a * b ;} 
template < class T > T larger( T a, T b ){return ( a > b ? a : b );} 
template < class T > T smaller( T a, T b ){return ( a < b ? a : b );} 
template<class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);} 
template<class T> T lcm(T a, T b ){return (a*b)/gcd(a,b);} 
template < class T > string converter( T n ){SS x;x << n;return x.str();}  
/// Functions End 
 
 
/// Debug Start 
template<class T1> void deb(T1 e1) 
{ 
    cout << e1 << endl; 
} 
template<class T1,class T2> void deb(T1 e1, T2 e2) 
{ 
    cout << e1 << space << e2 << endl; 
} 
template<class T1,class T2,class T3> void deb(T1 e1, T2 e2, T3 e3) 
{ 
    cout << e1 << space << e2 << space << e3 << endl; 
} 
template<class T1,class T2,class T3,class T4> void deb(T1 e1, T2 e2, T3 e3, T4 e4) 
{ 
    cout << e1 << space << e2 << space << e3 << space << e4 << endl; 
} 
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1, T2 e2, T3 e3, T4 e4, T5 e5) 
{ 
    cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << endl; 
} 
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1, T2 e2, T3 e3, T4 e4 ,T5 e5, T6 e6) 
{ 
    cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << space << e6 << endl; 
} 
/// Debug End 
 
/// TypeDef Start 
typedef  long long int           ll; 
typedef  map<string,int>         msi; 
typedef  map<int,int>	         mii; 
typedef  map<ll, ll>             mll; 
typedef  map<char,int>           mci; 
typedef  map<int,string>	     mis; 
typedef  pair<int,int> 	         pii; 
typedef  pair<string, int>       psi; 
typedef  pair<string, string>    pss; 
typedef  vector<int> 	         vi; 
typedef  vector<string> 	     vs; 
typedef  vector<char>	         vc; 
typedef  vector<bool>            vb; 
typedef  vector< pii >           vii; 
/// TypeDef End 
 
 
/// I/O Start 
#define sf                    scanf 
#define pf                    printf 
 
#define sf1(a)                scanf("%d", &a) 
#define sf2(a,b)              scanf("%d %d",&a, &b) 
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c) 
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d) 
 
#define sf1ll(a)              scanf("%I64d", &a) 
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b) 
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c) 
#define sf4ll(a,b,c, d)       scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d) 
 
#define READ(a)                  freopen(a, "r", stdin); 
#define WRITE(a)                 freopen(a, "w", stdout); 
/// I/O End 

bool cmp (const pair<int, int>& a, const pair<int, int>& b) {
	return a.first > b.first;
}
int main() {
	freopen("rental.in", "r", stdin);
	freopen("rental.out", "w", stdout);

	int n, m, r;
	cin >> n >> m >> r;

	vector<int> production(n);

	for (int i = 0; i < n; i++) {
		cin >> production[i];
	}

	vector<pair<int, int>> shops(m);

	for (int i = 0; i < m; i++) {
		cin >> shops[i].second >> shops[i].first;
	}
	vector<int> rent(r);

	for (int i = 0; i < r; i++) {
		cin >> rent[i];
	}

	sort(rent.begin(), rent.end(), greater<int>());
	sort(shops.begin(), shops.end(), cmp);
	sort(production.begin(), production.end(), greater<int>());

	int iShop = 0;
	int iRent = 0;
	int i = 0;
	ll sol = 0;
	while (i < n) {
		int litres = production[i];
		int moneyT = 0, curI = iShop;
		int last = 0;
		while (curI < m) {
			int rest = min(litres, shops[curI].second);
			moneyT += shops[curI].first * rest;
			litres -= rest;

			if (litres == 0) {
				last = rest;
				break;
			} else {
				curI++;
			}
		}

		if (iRent >= r || moneyT > rent[iRent]) {
			sol += moneyT;
			iShop = curI;
			if (iShop < m) shops[iShop].second -= last;
			i++;
		} else {
			sol += rent[iRent];
			n--;
			iRent++;
		}
	}

	cout << sol << '\n';
}
