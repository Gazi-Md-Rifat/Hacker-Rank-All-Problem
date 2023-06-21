#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=true

int get_total_x(vector<int> a, vector<int> b)
{
    int count = 0;
    sort(b.begin(),b.end());
    for (int i = 1; i <= b[0]; i++)
    {
        int j = 0;
        for (j = 0; j < a.size(); j++)
        {
            int temp = i * a[j];
            int k = 0;
            for (k = 0; k < b.size(); k++)
            {
                if (b[k] % temp != 0)
                {
                    break;
                }
            }
            if (k != b.size())
            {
                break;
            }
        }
        if (j == a.size())
        {
            count++;
        }
    }
    return count;
}


int main ()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        b.push_back(y);
    }
   
    cout <<  get_total_x(a,b);


    return 0;
}