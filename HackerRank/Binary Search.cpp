#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int left = 0;
    for (int right = n/2; right>=1; right /=2){
        while(right+left < n && arr[left+right] <= key) left += right;
    }
    cout << ((arr[left] == key) ? left : -1);
    
    return 0;
}
