// if prime --> 1
// else --> 0
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 0 || n == 1){
        cout << 0 << endl;
    }
    for(int i = 2;i <= n - 1;i++){
        if(n % i == 0){
            cout << 0 << endl;
            break; 
        }
    }
    cout << 1 << endl;
    return 0;
}    

