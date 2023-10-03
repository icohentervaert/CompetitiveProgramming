#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string time;

    cin >> time;
    
    string hr = time.substr(0,2);
    int hour = stoi(hr);

    if (time[8] == 'A' && hour == 12) {
        time.replace(0,2, 00);
    }

    if (time[8] == 'P' && hour != 12) {
        time.replace(0,2, to_string(hour + 12));
    }

    time.erase(8,2);
    // before editorial:
    // if (time[8] == *"A" && time[0] == *"1" && time[1] == *"2") {
    //     time[0] = *"0";
    //     time[1] = *"0";
    // }

    // if (time[8] == *"P" && !(time[0] == *"1" && time[1] == *"2")) {
    //     time[0] = char(int(time[0]) + 1);
    //     time[1] = char(int(time[1]) + 2);
    // }

    // time.pop_back();
    // time.pop_back();
    // 
    cout << time;
    return 0;
}
