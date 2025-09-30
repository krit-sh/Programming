#include <iostream>
#include <string>
using namespace std;

int titleToNumber(string columnTitle) {
    int result = 0;
    for (char c : columnTitle) {
        int value = c - 'A' + 1;
        result = result * 26 + value;
    }
    return result;
}

int main() {
    string columnTitle;
    cin >> columnTitle;
    cout << titleToNumber(columnTitle) << endl;
    return 0;
}
