#include <iostream>
using namespace std;

int main()
{
    string str1;
    string temp1;
    string str2;
    string temp2;

    cin >> str1 >> str2;

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] >= '0' && str1[i] <= '9')
        {
            temp1 += str1[i];
        }
    }
    for (int i = 0; i < str2.size(); i++)
    {
        if (str2[i] >= '0' && str2[i] <= '9')
        {
            temp2 += str2[i];
        }
    }

    int temp11 = stoi(temp1);
    int temp22 = stoi(temp2);

    cout << temp11 + temp22;
}