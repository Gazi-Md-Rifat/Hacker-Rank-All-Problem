#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/utopian-tree/problem?isFullScreen=true

int utopian_tree(int n)
{  
    int final_height = 0;
    int count = 0 , temp = n;
    while (n >= 0)
    {
        int summer_growth = final_height + 1;
        final_height = summer_growth;
        count++;
        if (count <= temp)
        {
            int spring_groeth = final_height * 2;
            final_height = spring_groeth;
            count++;
        }
        n -= 2;
    }
    
    return final_height;
}

int main ()
{
    int test_case;
    cin >> test_case;
    int cycle_number[test_case];
    for (int i = 0; i < test_case; i++)
    {
        cin >> cycle_number[i];
    }
    for (int i = 0; i < test_case; i++)
    {
        cout << utopian_tree(cycle_number[i]) << endl;
    }


    return 0;
}