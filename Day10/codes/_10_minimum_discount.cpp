#include <bits/stdc++.h>
using namespace std;
int stringToNum(string s)
{
    int solution = 0;
    for (auto c : s)
    {
        solution *= 10;
        solution += c - '0';
    }
    return solution;
}
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<string> items(n);
    vector<int> price(n);
    vector<int> discount(n);
    //  to get individual property of the item
    for (int i = 0; i < n; i++)
    {
        // to get item from entire string
        int j = 0;
        for (j = 0; j < v[i].size(); j++)
        {
            char c = v[i][j];
            if (c == ',')
            {
                break;
            }
            else
            {
                items[i] += c;
            }
        }

        // get price
        string currNum;
        for (j = j + 1; j < v[i].size(); j++)
        {
            char c = v[i][j];
            if (c == ',')
            {
                break;
            }
            else
            {
                currNum += c;
            }
        }
        price[i] = stringToNum(currNum);

        // to get discount
        currNum = "";
        for (j = j + 1; j < v[i].size(); j++)
        {
            currNum += v[i][j];
        }
        discount[i] = stringToNum(currNum);
    }

    vector<float> discountPrice(n);
    // to get discounted price not percentage
    for (int i = 0; i < n; i++)
    {
        discountPrice[i] = price[i] * (1 - discount[i] / 100.0);
    }

    float minimumDiscount = *min_element(discountPrice.begin(), discountPrice.end());

    // to display all the items with minimum discount
    for (int i = 0; i < n; i++)
    {
        if (discountPrice[i] == minimumDiscount)
        {
            cout << items[i] << endl;
        }
    }
    return 0;
}