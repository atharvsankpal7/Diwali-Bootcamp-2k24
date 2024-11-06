#include <bits/stdc++.h>
using namespace std;

char asciiToChar(int ascii)
{
    char c = ascii;
    return c;
}
int main()
{
    // todo : push all of the characters into a vector and reverse the vector after that print the vector
    int num;
    cin >> num;

    for (int i = 0; i < 4; i++)
    {
        // unit place
        int ascii = 0;
        int r = num % 10;
        num /= 10;
        ascii += r;

        // tenth place
        r = num % 10;
        r *= 10;
        ascii += r;
        num /= 10;

        cout << asciiToChar(ascii) << endl;
    }

    return 0;
}