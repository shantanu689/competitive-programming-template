#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <cstring>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
#include <bitset>
#include <numeric>
#include <set>
#include <deque>
#include <map>

#define debug1(x) cout << #x << " " << x << endl;
#define debug2(x,y) cout << #x<<" "<<x<<" "<<#y<<" "<<y<<endl;
#define debug3(x,y,z) cout << #x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;
#define pf push_front
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define mod 1000000007
#define mod2 998244353
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(),v.rend()

typedef long long ll;
using namespace std;

void readFile() {
    #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif
}

ll binpow(ll a,ll b) {    // Used for calculating a^b 
    if(b==0) return 1;
    long long res = binpow(a,b/2);
    if(b%2)
        return res*res*a;
    else
        return res*res;
}

/*-----------------------------------------E N D ---------------------------------*/

void solve() {
    int T;
    cin >> T;
    while(T--) {
        
    }    
}

int main() {
    readFile();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
