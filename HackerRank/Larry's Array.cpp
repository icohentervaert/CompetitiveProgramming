 
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t;

    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> testcases(n);
        for(int i = 0; i<n; i++) {
            cin >> testcases[i];
        }


        for (int i = 0; i<n; i++) {
            cout << testcases[n-i] << " " << testcases[n-i-1] << " " << testcases[n-i-2] << endl;
        }
    }

    return 0;
}
