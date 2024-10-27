#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int n) {
    // Calculate the common difference using the first two elements
    int commonDifference = (arr[n - 1] - arr[0]) / n;

    for (int i = 0; i < n - 1; i++) {
        // Check if the difference between consecutive elements is not equal to the common difference
        if (arr[i + 1] - arr[i] != commonDifference) {
            // The missing number is between arr[i] and arr[i + 1]
            return arr[i] + commonDifference;
        }
    }

    // If no missing number is found (shouldn't happen given the problem statement)
    return -1; 
}

int main() {
    // Input
    int n;
    cin >> n; // Size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Elements of the array
    }

    // Finding the missing number
    int missingNumber = findMissingNumber(arr, n);

    // Output
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
