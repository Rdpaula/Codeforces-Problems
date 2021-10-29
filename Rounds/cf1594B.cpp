#include "bits/stdc++.h"
#define f first
#define s second
#define pb push_back
#define ALL(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const ll mod = 1e9 + 7;
inline ll poww(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        ll ans = 0;
        cin >> n >> k;

        for (int i = 0; i < 32; ++i)
            if (k & (1 << i))
            {
                ans = (ans + poww(n, i)) % mod;
            }

        cout << ans << "\n";
    }
}
