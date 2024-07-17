#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = 5;
    b = 6;
    c = 7;
    a = c;
    b = c;

    cout << a << ' ' << b << ' ' << c;
    return 0;
}