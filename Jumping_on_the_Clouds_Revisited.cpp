#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Questiion Link : https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem?isFullScreen=true

int energy_level(vector<int> a, int k)
{
    int default_energy = 100, i = 0;
    while (1)
    {
        i = (i + k) % a.size();
        if (a[i] == 0)
        {
            default_energy -= 1;
        }
        else
        {
            default_energy -= 3;
        }
        if (i == 0)
        {
            break;
        }
    }

    return default_energy;
}

int main ()
{
    int n, k;
    cin >> n >> k;
    vector<int> element;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        element.push_back(x);
    }

    cout << energy_level(element, k);


    return 0;
}