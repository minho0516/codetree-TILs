#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> w >> h ;
    w += 8;
    h *= 3;
    cout << w << endl << h << endl;
    cout << h * w;
    return 0;
}