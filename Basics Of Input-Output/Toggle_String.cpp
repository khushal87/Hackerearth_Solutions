//Problem Link :- https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + 32;
        } else if (s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] - 32;
        }
        cout << s[i];
        i++;
    }
    return 0;
}
