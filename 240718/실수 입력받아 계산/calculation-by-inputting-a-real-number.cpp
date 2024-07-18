#include <iostream>
using namespace std;

int main() {
    float 실수1, 실수2;

    cin >> 실수1;
    cin >> 실수2;

    cout.precision(2);
    cout << fixed;

    cout << 실수1 + 실수2;
    return 0;
}