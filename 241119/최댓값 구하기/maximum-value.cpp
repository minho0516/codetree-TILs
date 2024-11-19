#include <iostream>
using namespace std;

int main() {
    int a , b, c;
    cin >> a >> b >> c;

    if(a > b)
    {
        if(a > c)
        {
            cout << a;
        }
        else if(c > b)
        {
            cout << c;
        }
    }
    else
    {
        if(b > c)
        {
            cout << b;
        }
        else if(c > a)
        {
            cout << c;
        }
    }
    return 0;
}