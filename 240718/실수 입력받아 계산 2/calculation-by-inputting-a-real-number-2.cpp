#include <iostream>
using namespace std;

int main() {
    float a;
    cin >> a;

    a = a + 1.5f;

    
    cout.precision(2);
    cout << fixed;

    cout << a;
    return 0;
}