#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n >= 80)
    {
        cout << "pass";
    }
    else
    {
        int more;
        more = 80 - n;
        cout << more << " more score";
    }
    return 0;
}