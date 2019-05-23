//Problem Link :- https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sn;
        string st;
        cin >> n;
        int x = n % 12;
        if (x == 1) {
            sn = n + 11;
            st = "WS";
        } else if (x == 2) {
            sn = n + 9;
            st = "MS";
        } else if (x == 3) {
            sn = n + 7;
            st = "AS";
        } else if (x == 4) {
            sn = n + 5;
            st = "AS";
        } else if (x == 5) {
            sn = n + 3;
            st = "MS";
        } else if (x == 6) {
            sn = n + 1;
            st = "WS";
        } else if (x == 7) {
            sn = n - 1;
            st = "WS";
        } else if (x == 8) {
            sn = n - 3;
            st = "MS";
        } else if (x == 9) {
            sn = n - 5;
            st = "AS";
        } else if (x == 10) {
            sn = n - 7;
            st = "AS";
        } else if (x == 11) {
            sn = n - 9;
            st = "MS";
        } else if (x == 0) {
            sn = n - 11;
            st = "WS";
        }
        cout << sn << " " << st << endl;
    }
    return 0;
}
