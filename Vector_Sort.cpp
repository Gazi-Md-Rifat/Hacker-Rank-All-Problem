#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Hacker Rank Questiion Link : https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true

int main()
{
    int n;
    cin >> n;
    vector<int> element;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        element.push_back(x);
    }
    sort(element.begin(), element.end());
    for (int i = 0; i < n; i++)
    {
        cout << element[i] << " ";
    }

    return 0;
}