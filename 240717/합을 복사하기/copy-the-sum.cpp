#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;
    int total = a + b + c;
    a = total;
    b = total;
    c = total;

    cout << a << ' ' << b << ' ' << c;
    return 0;
}