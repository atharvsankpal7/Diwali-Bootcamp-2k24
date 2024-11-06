#include <bits/stdc++.h>
using namespace std;

int main()
{
    float salary;
    float rating;
    cin >> salary >> rating;

    if (salary <= 0 || rating > 5 || rating < 1)
    {
        cout << "Invalid Input " << endl;
        return 0;
    }

    float increment;
    if (rating <= 3)
    {
        increment = salary * 0.10;
    }
    else if (rating <= 4)
    {
        increment = salary * 0.25;
    }
    else
    {
        increment = salary * 0.30;
    }

    salary += increment;
    cout << "your incremented salary is : " << salary;
    return 0;
}