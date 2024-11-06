#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 >= num2 || num1 <= 0 || num2 <= 0)
    {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int currNum = num1;
    while (currNum != num2)
    {
        if (isPrime(currNum))
        {
            cout << currNum << " ";
        }

        currNum++;
    }

    return 0;
}