#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, xi, yi, xf, yf;

    cin >> t >> xi >> yi >> xf >> yf;
    if (xi != xf || yi != yf) {
        for (int i = 1; i <= t; i++) {
            char direction;
            cin >> direction;
            switch (direction) {
            case 'E':
                if (xi < xf)
                    xi++;
                break;
            case 'S':
                if (yi > yf)
                    yi--;
                break;
            case 'W':
                if (xi > xf)
                    xi--;
                break;
            case 'N':
                if (yi < yf)
                    yi++;

                break;
            }
            if (xi == xf && yi == yf) {
                cout << i;
                break;
            }
        }
        if (xi != xf || yi != yf)
            cout << -1;
    } else
        cout << 0;

    return 0;
}
