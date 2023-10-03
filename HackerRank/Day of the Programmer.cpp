#include <bits/stdc++.h>
using namespace std;


int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);

    int yr;
    cin >> yr;
    if (yr == 1918) {
        cout << "26.09." << yr;
        return 0;
    }
    if (yr % 400 == 0 || (yr % 4 == 0 && yr % 100 != 0 ) || (yr <= 1917 && yr >= 1700 && yr % 4 ==0)) {
        cout << "12.09." << yr;
        return 0;
    }
    cout << "13.09."  << yr;
    return 0;
}
