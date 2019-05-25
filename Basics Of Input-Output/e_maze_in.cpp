//Problem link :- https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int i = 0;
    int x = 0, y = 0;
    while (s[i] != '\0') {
        if (s[i] == 'L') {
            x--;
        }
        if (s[i] == 'R') {
            x++;
        }
        if (s[i] == 'U') {
            y++;
        }
        if (s[i] == 'D') {
            y--;
        }
        i++;
    }
    cout << x << " " << y << endl;
    return 0;
}
