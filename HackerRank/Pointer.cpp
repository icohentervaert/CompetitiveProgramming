#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b;

    int *pa = &a, *pb = &b;

    cin >> a >> b;
    int temp = *pa;
    *pa = *pa + *pb;
    *pb  = abs((temp - *pb));
    cout << a << endl << b << endl;
    
    return 0;
}
