#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;

    cin >> q;

    int Fx = 0, Fy = 0, Fz = 0;
    while (q--) {
        int X, Y, Z;

        cin >> X >> Y >> Z;

        Fx += X;

        Fy += Y;

        Fz += Z;
    }

    if (Fx == 0 && Fy == 0 && Fz == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
