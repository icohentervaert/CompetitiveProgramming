#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1;
    getline(cin, str1);
    unordered_map<char, int> letters;
    for(int i = 0; i<int(str1.length()); i++) {
        if(str1[i] == ' ') continue;
        
        unordered_map<char, int>::iterator letter = letters.find(str1[i]);
        if(letter == letters.end()) {
            letters.insert(pair(str1[i], 1));
            continue;
        }
        letter->second = letter->second + 1;
        
    }
    string str2;
    getline(cin, str2);
    for(int i = 0; i<int(str2.length()); i++) {
        if(str2[i] == ' ') continue;
        unordered_map<char, int>::iterator letter = letters.find(str2[i]);
        if(letter == letters.end() || letter->second == 0) {

            cout << "NO";
            return 0;
        }
        letter->second = letter->second  -1;
    }
    cout << "YES";
    return 0;
}
