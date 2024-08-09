#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout.precision(2);
    cout.fixed;
    
    cout << a + b;
    cout << " ";
    cout << (double)(a + b) / 2;
    return 0;
}