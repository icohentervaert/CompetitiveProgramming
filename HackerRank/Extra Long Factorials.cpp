#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ull fact = 1;
    cin >> n;
    
    for (int i = 2; i<= n; i++) {
        fact *= i;
    }
    cout << fact;
    return 0;
}
