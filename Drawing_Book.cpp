#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link :  https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=true


// my first logic...
int print_ans(int n, int p)
{
    int ans = -1;
    if (n % 2 != 0)
    {
        n = n-1;
    }
    int f = 1, e = n;
    if (p - f <= e - p)
    {
        cout << (p-f) << " " << e- p;
        if (p % 2 == 0)
        {
            p = p + 1;
        }
        for (int i = 1; i <= p; i = i + 2)
        {
            ans++;
        }
    }
    else 
    {
        if (p % 2 != 0)
        {
            p = p -1;
        }
        for (int i = e; i >= p; i = i - 2)
        {
            ans++;
        }

    }


    return ans;
}

// optimized soloution ................................
int pageCount(int n, int p) 
{

   return min(p/2, n/2-p/2);
}

int main ()
{
    int n, p;
    cin >> n >> p;

    cout << print_ans(n,p) << endl << endl;
    cout << pageCount(n, p);

    return 0;
}