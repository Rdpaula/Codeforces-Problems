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

bool sameChar(string &s)
{
    char x = s[0];
    for (char &y : s)
        if (x != y)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        char c;
        cin >> n >> c;
        cin >> s;

        if (sameChar(s) && s[0] == c)
        {
            cout << "0\n";
            continue;
        }
        s = "#" + s;

        vi qnt(n + 1, 0);
        bool fim = false;
        for (int i = 1; i <= n; ++i)
        {
            if (s[i] == c)
            {
                bool can = true;
                for (int j = i; j <= n; j += i)
                {
                    if (s[j] != c)
                    {
                        can = false;
                        break;
                    }
                }

                if (can)
                {
                    cout << "1\n"
                         << i << "\n";
                    fim = true;
                    break;
                }
            }
        }

        if (fim)
            continue;
        cout << 2 << "\n";
        cout << n - 1 << " " << n << "\n";
    }
}