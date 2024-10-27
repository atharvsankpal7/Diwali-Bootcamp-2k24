#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input from user
    int n;
    cin >> n;
    if(n < 2){
        cout << "Please enter value amount of numbers";
        return 0;
    }
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // main logic here

    // find out the largest element

    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // find out the second largest element

    int second = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    // output
    cout << "answer : " << second << endl;
    return 0;
}