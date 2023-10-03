#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // my first solution, before reading editorial:
    // vector<ll> arr;
    // ll integer;
    // for(int i = 0; i < 5; i++) {
    //     cin >> integer;
    //     arr.push_back(integer);
    // }
    // sort(arr.begin(), arr.end());
    // ll sum1 = arr[1] + arr[2] + arr[3] + arr[4];
    // ll sum2 = arr[0] + arr[1] + arr[2] + arr[3];
    // if (sum1 > sum2) cout << sum2 << " " << sum1; else cout << sum1 << " " << sum2;
    

    // solution after reading editiorial;
    ll min = 1000000000;
    ll max = 0;
    ll sum = 0;
    for(int i = 0; i<5; i++) {
        ll n;
        cin >> n;

        if (min>n) min = n;

        if (max<n) max = n;

        sum = sum +n;
    }

    cout << sum - max << " " << sum - min;
    return 0;
}
