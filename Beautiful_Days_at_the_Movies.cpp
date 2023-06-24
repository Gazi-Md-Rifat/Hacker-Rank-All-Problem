#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Questiion Link : https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?isFullScreen=true


int main ()
{
    int start, end, k, count = 0;
    cin >> start >> end >> k;
    for (int i = start; i <= end; i++)
    {
        int v = i, reverse = 0;
        while (1)
        {
            if (v == 0)
            {
                break;
            }
            int rem = v % 10;
            reverse = (10 * reverse) + rem;
            v = v / 10;
        }
        if (abs(i - reverse) % k == 0)
        {
            count++;
        }
    }
    cout << count;



    return 0;
}
