//Problem Link:- https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sh, sm, eh, em;
        cin >> sh >> sm >> eh >> em;
        int th, tm;
        th = eh - sh;
        if (em < sm) {
            th--;
            tm = (60 - sm) + em;
        } else {
            tm = em - sm;
        }
        cout << th << " " << tm << endl;
    }
    return 0;
}
