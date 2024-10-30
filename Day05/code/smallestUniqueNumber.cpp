#include <bits/stdc++.h>
using namespace std;
bool isNumberUnique(int num){
    unordered_set<int> us;

    for(int i = 0;i < 4;i++){
        int r = num % 10;
        if(us.find(r) != us.end()){
            return false;
        }else{
            us.insert(r);
        }
        num = num / 10;
    }
    return true;
}
int main()
{   
    int num;
    cin >> num;
    int greaterElement = num + 1;
    while (!isNumberUnique(greaterElement))
    {
        greaterElement++;
    }
    cout << "The number which unique after input number is : " << greaterElement << endl;
    return 0;
}