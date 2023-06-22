#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/angry-professor/problem?isFullScreen=true

bool class_permission(vector<int> a)
{
    int k = a[0];
    int count = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] <= 0)
        {
            count++;
        }
    }
    if (count >= k)
    {
        return true;
    }
    return false;
}

int main ()
{
    int test_case, number_of_student, threshold;
    cin >> test_case; 
    vector<vector<int>> element;
    for (int i = 0; i < test_case; i++)
    {
        cin >> number_of_student >> threshold;
        vector<int> data;
        data.push_back(threshold);
        for (int j = 0; j < number_of_student; j++)
        {
            int x ;
            cin >> x;
            data.push_back(x);
        }
        element.push_back(data);
    }
    // find answer class will be cancel or not..
    for (int i = 0; i < test_case; i++)
    {
        if (class_permission(element[i]))
        {
            cout << "NO"; // No means class is  not cancel...
        }
        else 
        {
            cout << "YES"; // yes means class is cancel..
        }
        cout << endl;
    }

    return 0;
}