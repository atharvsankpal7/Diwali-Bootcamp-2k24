#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // main logic
    bool flagArr[n - 1] = {false};
    int duplicate = -1;

    for (int i = 0; i < n; i++)
    {
        if (flagArr[arr[i] - 1])
        {
            duplicate = arr[i];
            break;
        }
        flagArr[arr[i] - 1] = true;
    }

    // output
    cout << duplicate;
    return 0;
}
int anotherApproach()
{
    // input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // main logic
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            // output
            cout << arr[i];
            return 0;
        }
    }

    // output if no duplicate is found
    cout << -1;
    return 0;
}