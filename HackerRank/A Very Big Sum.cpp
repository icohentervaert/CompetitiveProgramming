#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {
    int n;
    cin >> n;

    long sum = 0;
    while(n--) {
        long number;
        cin >> number;
        sum += number;
    }
    cout << sum;
    return 0;
}
