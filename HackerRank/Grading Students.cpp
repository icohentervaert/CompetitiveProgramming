#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;
    while (n--) {
        int grade;
        cin >> grade;
        if (grade < 38) {
            cout << grade << "\n";
            continue;
        }
        int rounded_grade = int(ceil(grade / 5.0) * 5);
        if (rounded_grade - grade < 3 && rounded_grade - grade > 0) {
            cout << rounded_grade << "\n";
            continue;
        }
        cout << grade << "\n";
    }

    return 0;
}
