#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.size() < 6)
    {
        cout << "Invalid Password, Please Try Again" << endl;
        return 0;
    }

    bool isLowerP, isDigitP, isUpperP = false;

    for (auto c : s)
    {
        if (c == ' ')
        {
            cout << "Invalid Password, Please Try Again" << endl;
            return 0;
        }
        if (c == '/')
        {
            cout << "Invalid Password, Please Try Again" << endl;
            return 0;
        }

        if(islower(c)){
            isLowerP = true;
        }

        if(isdigit(c)){
            isDigitP = true;
        }

        if(isupper(c)){
            isUpperP = true;
        }
    }

    if(isLowerP && isDigitP && isUpperP){
        cout << "Valid Password" <<endl;
    }else{
        cout << "Invalid Password, Please Try Again" << endl;
    }

    return 0;
}