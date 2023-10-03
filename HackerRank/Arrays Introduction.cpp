#include <bits/stdc++.h>
using namespace std;

int main() {
    int l;
    
    cin >> l;
    
    int a[l];
    for(int i = 1; i <= l; i++) {
        int n;
        cin >> n;

        a[l-i] = n;
    }
    for (int i = 0; i<l; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
