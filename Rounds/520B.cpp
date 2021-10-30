#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, m, quant = 0;
    cin >> n >> m;
    
    if (n > m) {
        cout << n-m;
    } else if (n < m) { 
        while (m > n) {
            if (m % 2 == 0) {
                m /= 2;
            } else {
                m++; 
                m /= 2;
                quant++;
            }
            quant++;
        }
        quant += (n-m);
        cout << quant;
    }
    
    return 0;
}