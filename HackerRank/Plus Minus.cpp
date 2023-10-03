#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int size;

    cin >> size;

    cout << setprecision(6) << fixed;
    
    int pval = 0, nval = 0, zval = 0;

    for (int i = 0; i< size; i++) {
        int x;

        cin >> x;

        if(x == 0) zval++;
        if(x < 0) nval++;
        if(x >0) pval++;
    }
    cout << float(pval)/float(size) << "\n" << float(nval)/float(size) << "\n" << float(zval)/float(size);
    return 0;
}
