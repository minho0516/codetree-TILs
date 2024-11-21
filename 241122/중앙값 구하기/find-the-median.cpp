#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b && b > c) cout << b;
    if(c > b && b > a) cout << b;

    if(b > c && c > a) cout << c;
    if(a > c && c > b) cout << c;
    
    if(c > a && a > b) cout << a;
    if(b > a && a > c) cout << a;

    return 0;
}