//Problem Link :- https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n;
    int t = 0;
    int rem;
    int res = 0;
    while (n > 0) {
        n = n / 10;
        t++;

    }
    if (t == 10) {
        for (int i = 10; i >= 1; i--) {
            int rem = m % 10;
            res = res + rem * i;
            m = m / 10;
        }
        if (res % 11 == 0) {
            cout << "Legal ISBN";
        } else {
            cout << "Illegal ISBN";
        }
    } else {
        cout << "Illegal ISBN";
    }
    return 0;
}
