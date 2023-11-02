#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s, t, a, b, apples, oranges;
    cin >> s >> t >> a >> b >> apples >> oranges;

    int house_apples = 0, house_oranges = 0, distance_from_tree;
    while (apples--) {
        cin >> distance_from_tree;
        if (distance_from_tree + a >= s && distance_from_tree + a <= t)
            house_apples++;
    }
    while (oranges--) {
        cin >> distance_from_tree;
        if (distance_from_tree + b >= s && distance_from_tree + b <= t)
            house_oranges++;
    }
    cout << house_apples << "\n" << house_oranges << "\n";
    return 0;
}
