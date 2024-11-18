#include <iostream>
using namespace std;

int main() {
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m;
    cin >> m;
    cout << month[m - 1];
    return 0;
}