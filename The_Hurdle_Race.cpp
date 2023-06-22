#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/the-hurdle-race/problem?isFullScreen=true

int hurdle_race(vector<int> a, int k)
{
    int heighest_hurdle = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > heighest_hurdle)
        {
            heighest_hurdle = a[i];
        }
    }
    if (heighest_hurdle > k)
    {
        return heighest_hurdle - k;
    }
    return 0;
}

int main ()
{
    int n, k;
    cin >> n >> k;
    vector<int> height;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        height.push_back(x);
    }
    
    cout << hurdle_race(height, k);


    return 0;
}