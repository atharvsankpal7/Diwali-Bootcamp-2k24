#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int m;
    cin >> num >> m;

    int count = 0;
    int stairsReached = 0;
    while (stairsReached != num)
    {
        if (num - stairsReached >= m){
            stairsReached += m;
            count++;
        }else{
           count += num - stairsReached;
           stairsReached += num - stairsReached;
        }
    }
    cout << count << endl;
    return 0;
}