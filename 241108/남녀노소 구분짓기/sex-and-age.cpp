#include <iostream>
using namespace std;

int main() {
    int sexure;
    int age;

    cin >> sexure;
    cin >> age;

    if(sexure == 0)
    {
        if(age >= 19)
        {
            cout << "MAN";
        }
        else
        {
            cout << "BOY";
        }
    }
    else if(sexure == 1)
    {
        if(age >= 19)
        {
            cout << "WOMAN";
        }
        else
        {
            cout << "GIRL";
        }
    }
    return 0;
}