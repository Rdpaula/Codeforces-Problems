#include "bits/stdc++.h"
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

using ll = long long;
using ld = long double;

using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pld = pair<ld,ld>;

using vi = vector<int>;
using vl = vector<ll>;
using vb = vector<bool>;
using vld = vector<ld>;
using vs = vector<string>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpld = vector<pld>;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define EB emplace_back

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) x.size()

#define INF 1e18
#define MOD 1000000007
//#define DEBUG

//using namespace __gnu_pbds;

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//*find_by_order(); order_of_key();

int clz(unsigned long long N) {
    return N ? 63 - __builtin_clzll(N) : -1;
}
string s;
int n;

int test(char a, char b) {
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(s[i] == a && s[j] == b) {
                if(a == '0' && b == '0' && i == 0) continue;

                ans = min(ans, n-(j+1) + j-i-1);
//                cout << i << " " << j << endl;
            }
        }
    }
    return ans;
}

void solvetask() {
    cin >> s;
    n = s.size();

    int ans = INT_MAX;
    ans = min(ans, test('0', '0'));
    ans = min(ans, test('2', '5'));
    ans = min(ans, test('5', '0'));
    ans = min(ans, test('7', '5'));
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);

    int t = 1;
    cin >> t;

    while(t--) solvetask();
}
