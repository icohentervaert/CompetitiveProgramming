#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        string space(n-i, ' '), stairs(i, '#');
        cout << space << stairs << "\n";
    }

    return 0;
}
