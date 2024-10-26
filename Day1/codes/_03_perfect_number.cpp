#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1;i <= n - 1; i++){
        // if current number is divisor of `n`
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        cout << "the number is perfect";
    }else{
        cout << "the number is not perfect";
    }
    return 0;
}