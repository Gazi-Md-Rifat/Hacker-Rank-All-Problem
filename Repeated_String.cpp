#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/repeated-string/problem?isFullScreen=true

long repeatedString(string s, long n)
{
    int size = s.length(), update_size = n % s.length(), update_count = 0;
    long count = 0, ans = 0;
    if (s.length() == 1 && s[0] == 'a')
    {
        return n;
    }
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
        if (i < update_size)
        {
            if (s[i] == 'a')
            {
                update_count++;
            }
        }
    }
    ans = (count * (n / size)) + update_count;
    return ans;
}

int main()
{
    string s;
    long n;
    cin >> s >> n;
    cout << repeatedString(s, n);

    return 0;
}