#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i;

    cin >> i;
    int tallest_candle = 0;
    int tallest_candles = 0;
    while (i--) {
        int x;
        cin >> x;

        if (x == tallest_candle) {
            tallest_candles += 1;
        }
        if (x > tallest_candle) {
            tallest_candles = 1;
            tallest_candle = x;
        }
    }
    cout << tallest_candles;
    return 0;
}
