#include <bits/stdc++.h>
using namespace std;


// Hacker Rank Question Link : https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true

int find_digits(int n)
{
    int count = 0, x = n;
    while (1)
    {
        if (x == 0)
        {
            return count;
        }
        int rem = x % 10;
        x = x / 10;
        if (rem == 0){ continue;}
        if (n % rem == 0)
        {
            count++;
        }
    }
    return count;
}

int main ()
{
    int test_case;
    cin >> test_case;
    vector<int> data;
    for (int i = 0; i < test_case; i++)
    {
        int x;
        cin >> x;
        data.push_back(x);
    }
    for (int i = 0; i < data.size(); i++)
    {
        int  ans =find_digits(data[i]);
        cout << ans << endl;
    }



    return 0;
}