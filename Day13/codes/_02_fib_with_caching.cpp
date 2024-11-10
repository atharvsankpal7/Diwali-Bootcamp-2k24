#include <bits/stdc++.h>
using namespace std;
int fib(int n, unordered_map<int, int> um)
{
    if (um.find(n) != um.end())
    {
        return um[n];
    }

    int fibN = fib(n - 1, um) + fib(n - 2, um);
    um[n] = fibN;
    return fibN;
}
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> um;
    um[0] = 0;
    um[1] = 1;
    int fibOfN = fib(n, um);
    cout << fibOfN << endl;
    cout << fib(n) << endl;
    return 0;
}