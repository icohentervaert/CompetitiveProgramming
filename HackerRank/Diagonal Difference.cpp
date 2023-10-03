#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    int diff = 0;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> num;
            if (i == j) diff += num;
            if (j == n - 1 - i)  diff -= num;
        }
    }
    cout << abs(diff);
    return 0;
}
