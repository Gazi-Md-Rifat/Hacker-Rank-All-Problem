#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

int main ()
{
    int kangaroo_1_start, kangaroo_2_start, kangaroo_1_jump, kangaroo_2_jump;
    cin >> kangaroo_1_start >> kangaroo_1_jump >> kangaroo_2_start >> kangaroo_2_jump;
    if ((kangaroo_1_start < kangaroo_2_start && kangaroo_2_jump > kangaroo_1_jump) || (kangaroo_1_start > kangaroo_2_start && kangaroo_1_jump > kangaroo_2_jump) || (kangaroo_1_start > kangaroo_2_start && kangaroo_1_jump == kangaroo_2_jump) || (kangaroo_1_start < kangaroo_2_start && kangaroo_1_jump == kangaroo_2_jump))
    {
        cout << "NO";
    }
    else if ((kangaroo_1_start - kangaroo_2_start) % (kangaroo_1_jump - kangaroo_2_jump) == 0 || (kangaroo_2_start - kangaroo_1_start) % (kangaroo_2_jump - kangaroo_1_jump) == 0)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
   


    return 0;
}