#include <bits/stdc++.h>
using namespace std;
char asciiToChar(int ascii)
{
    char c = ascii;
    return c;
}
int main()
{
    string s;
    cin >> s;

    int n = s.size();
    for(int i = 0;i < n; i+=2){
        char c = s[i];
        int x = c - '0';

        c = s[i + 1];
        int y = c - '0';
        
        int ascii = x * 10 + y;

        cout << asciiToChar(ascii) << endl;
    }
    return 0;
}