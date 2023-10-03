#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin >> x;

    string x_text;

    switch (x) {
    case 1:
        x_text = "one";
        break;
    case 2:
        x_text = "two";
        break;
    case 3:
        x_text = "three";
        break;
    case 4:
        x_text = "four";
        break;
    case 5:
        x_text = "five";
        break;
    case 6:
        x_text = "six";
        break;
    case 7:
        x_text = "seven";
        break;
    case 8:
        x_text = "eight";
        break;
    case 9:
        x_text = "nine";
        break;
    default:
        x_text = "Greater than 9";
        break;
    }

    cout << x_text;
    return 0;
}
