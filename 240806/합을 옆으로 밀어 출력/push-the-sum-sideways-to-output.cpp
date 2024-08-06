#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int n;
    int arr[100];
    int temp = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp += arr[i];
    }

    str = to_string(temp);

    char tempch = str[0];

    for (int i = 0; i < str.size(); i++)
    {
        str[i] = str[i + 1];

        if (i == str.size() - 1)
        {
            str[i] = tempch;
        }
    }

    cout << str;

    return 0;
}