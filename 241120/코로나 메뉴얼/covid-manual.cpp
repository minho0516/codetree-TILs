#include <iostream>
using namespace std;

int main() {
    char hadGamgi1, hadGamgi2, hadGamgi3;
    bool hg1, hg2, hg3;
    int a, b, c;
    int wiguep = 0;

    cin >> hadGamgi1 >> a >> hadGamgi2 >> b >> hadGamgi3 >> c;

    if(hadGamgi1 == 'Y')
    {
        hg1 = true;
    }
    else if(hadGamgi1 == 'N')
    {
        hg1 = false;
    }

    if(hadGamgi2 == 'Y')
    {
        hg2 = true;
    }
    else if(hadGamgi2 == 'N')
    {
        hg2 = false;
    }

    if(hadGamgi3 == 'Y')
    {
        hg3 = true;
    }
    else if(hadGamgi3 == 'N')
    {
        hg3 = false;
    }

    if(hg1 && a >= 37)
    {
        wiguep++;
    }
    if(hg2 && b >= 37)
    {
        wiguep++;
    }
    if(hg3 && c >= 37)
    {
        wiguep++;
    }

    if(wiguep >= 2)
    {
        cout << "E";
    }
    else
    {
        cout << "N";
    }
    return 0;
}