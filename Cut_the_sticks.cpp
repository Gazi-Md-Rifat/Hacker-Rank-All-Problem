#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/cut-the-sticks/problem?isFullScreen=true



// Function...
vector<int> cutTheSticks(vector<int> arr)
{
    vector<int> temp;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        int data = arr[i];
        if (data != 0)
        {
            int count = 0;
            for (int j = i; j < arr.size(); j++)
            {
                arr[j] = arr[j] - data;
                count++;
            }
            temp.push_back(count);
        }
    }

    return temp;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> p = cutTheSticks(arr);
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}