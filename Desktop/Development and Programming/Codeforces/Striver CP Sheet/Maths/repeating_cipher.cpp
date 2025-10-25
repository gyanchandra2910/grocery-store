#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";
    int i = -1, j = 1;

    while (true) {
        i = i + j;
        if (i >= s.size()) break; 
        ans += s[i];
        j++;
    }

    cout << ans << endl;
    return 0;
}
