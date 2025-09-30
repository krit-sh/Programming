#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    int prev1 = 1, prev2 = 1;
    for (int i = 2; i <= n; ++i) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return prev1;
}

int main() {
    int n;
    cin >> n;
    cout << climbStairs(n) << endl;
    return 0;
}
