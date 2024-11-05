#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int m;
    cin >> num >> m;

    int minDist = 0;

    int greaterElement = num + 1;
    while (greaterElement % m != 0)
    {
        greaterElement++;
    }

    int smallerElement = num - 1;
    while (smallerElement % m != 0)
    {
        smallerElement--;
    }

    int distanceFromLarge = greaterElement - num;

    int distanceFromSmall = num - smallerElement;

    if (distanceFromLarge < distanceFromSmall)
    {
        cout << greaterElement << endl;
    }
    else
    {
        cout << smallerElement << endl;
    }
    return 0;
}