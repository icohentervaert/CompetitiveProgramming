#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        string out;
        switch (i) {
        case 1:
            out = "one";
            break;
        case 2:
            out = "two";
            break;
        case 3:
            out = "three";
            break;
        case 4:
            out = "four";
            break;
        case 5:
            out = "five";
            break;
        case 6:
            out = "six";
            break;
        case 7:
            out = "seven";
            break;
        case 8:
            out = "eight";
            break;
        case 9:
            out = "nine";
            break;
        default:
            if (i % 2 == 0) {
                out = "even";
            } else {
                out = "odd";
            }
        }
        cout << out << "\n";
    }
    return 0;
}
