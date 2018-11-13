#include <sys/time.h>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

#define IT(a,it) for(auto it=a.begin(); it != a.end(); it++)
#define REV_IT(a,it) for(auto it=a.rbegin(); it != a.rend(); it++)
#define LL long long
#define LD long double
#define MP make_pair
#define FF first
#define SS second
#define PB push_back
#define INF (int)(1e9)
#define EPS (double)(1e-9)

#ifndef ONLINE_JUDGE
#  define LOG(x) cerr << #x << " = " << (x) << endl
#else
#  define LOG(x) 0
#endif

#define MAXX 5000005

using namespace std;

typedef pair <int, int> pi_i;
typedef pair<int, pi_i> pi_ii;

bool cmp(int a, int b){ return a>b; }
template<class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<class T> T lcm(T a, T b) { return a * (b / gcd(a, b)); }

int main(){
	ios_base::sync_with_stdio(false);
	
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int k, x, y, a, b;cin >> k;
	while(k != 0) {
		cin >> x >> y;
		for(int i = 0;i < k;i++) {
			cin >> a >> b;
			if(x == a || y == b) {
				cout << "divisa\n";
			} else if(a < x && b < y) {
				cout << "SO\n";
			} else if(a > x && b > y) {
				cout << "NE\n";
			} else if(a > x && b < y) {
				cout << "SE\n";
			} else {
				cout << "NO\n";
			}
		}
		cin >> k;
	}
	
	//fclose(stdin);
	//fclose(stdout);
return 0;	
}
