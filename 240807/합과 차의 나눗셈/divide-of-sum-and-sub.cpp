#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    cout.precision(2);
    cout << fixed;

    cout << (a + b) / (a - b);
    return 0;

}