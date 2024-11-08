#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int r = 0;
    for (auto c : str)
    {
        int digit = c - '0';

        r = (r * 10 + digit) % 11;
    }
    cout << r << endl;
    return 0;
}