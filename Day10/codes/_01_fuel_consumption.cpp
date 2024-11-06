#include <bits/stdc++.h>
using namespace std;

int main()
{
    double liters, kilometer;
    cin >> liters;
    cin >> kilometer;

    double hunderedKilometer = kilometer / 100.00;

    cout << fixed << setprecision(2);
    cout << (liters / hunderedKilometer) << endl;

    double miles = kilometer * 0.6214;
    double gallons = liters * 0.2642;
    cout << (miles / (float)gallons) << endl;

    return 0;
}