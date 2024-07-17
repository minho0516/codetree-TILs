#include <iostream>
using namespace std;

int main() {
    float ft;
    float cm;
    cin >> ft;
    cm = ft * 30.48;

    cout.precision(1);
    cout << fixed;
    
    cout << cm;
    
    return 0;
}