#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int b;
    b = (10000 * w) / (h * h);

    cout << b;
    cout << endl;

    if(b >= 25)
    {
        cout << "Obesity";
    }
    return 0;
}