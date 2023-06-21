#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/picking-numbers/problem?isFullScreen=true

int picking_number(vector<int> a)
{
    sort(a.begin(), a.end());
    int temp[a.size()] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < a.size(); j++) // j start from i ..becauge we find how many number are in my subarry..i is a part of my subarry..thats why we start traverse from i ...
        {
            if (a[j] - a[i] <= 1)
            {
                temp[i]++;
            }
        }
    }
    int number = 0;
    for (int i = 0; i < sizeof(temp) / sizeof(temp[0]); i++)
    {
        if (number < temp[i])
        {
            number = temp[i];
        }
    }

    return number;
}

int main ()
{
    int n;
    cin >> n;
    vector<int> elemnent;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        elemnent.push_back(x);
    }

    cout << picking_number(elemnent);

    return 0;
}