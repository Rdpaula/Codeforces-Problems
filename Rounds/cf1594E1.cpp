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

const int mod = 1e9 + 7;
inline ll poww(ll a, ll b)
{
    ll res = 1LL;
    while (b > 0)
    {
        if (b & 1LL)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1LL;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll k;
    cin >> k;

    ll dp[k + 1];
    dp[1] = 1LL;

    for (int i = 2; i <= k; ++i)
    {
        dp[i] = (dp[i - 1] * dp[i - 1]) % mod;
        dp[i] = (dp[i] * 16LL) % mod;
    }

    dp[k] = (dp[k] * 6) % mod;

    cout << dp[k] << "\n";
}