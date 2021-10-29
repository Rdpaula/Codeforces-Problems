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

int n;
int arr[50];

void solvetask() {
    cin >> n;
    cin >> arr[0];
    int mini = arr[0], maxi = arr[0];
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    if(mini < 0)
        for(int i = 0; i < n; i++) {
            arr[i] += -mini;
        }

    for(int i = maxi-mini; i >= 1; i--) {
        bool ok = true;
        int need = arr[0] % i;
//        cout << "i: " << i << " need: " << need << endl;
        for(int j = 1; j < n; j++) {
//            cout << arr[j] % i << " ";
            if((arr[j] % i) != need) ok = false;
        }
//        cout << endl;
        if(ok) {
            cout << i << "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);

    int t = 1;
    cin >> t;

    while(t--) solvetask();
}
