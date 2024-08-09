#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    cout.precision(2);
    cout.fixed;
    
    cout << a + b;
    cout << " ";
    cout << (a + b) / 2;
    return 0;
}