// Hacker Rank Question Link : https://www.hackerrank.com/challenges/service-lane/problem?isFullScreen=false


#include <bits/stdc++.h>
#include <vector>
using namespace std;



vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int> width) {
    vector<int> ans;
    for (int i = 0; i < cases.size(); i++)
    {
        int lane = INT_MAX;
        for (int st = cases[i][0]; st <= cases[i][1]; st++)
        {
            lane = min(lane, width[st]);
        }
        ans.push_back(lane);
    }
    
    return ans;
}

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> width(n);
    for (int i = 0; i < n; i++)
    {
        cin >> width[i];
    }
    vector<vector<int>> cases;
    for (int i = 0; i < t; i++)
    {
        vector<int> temp;
        for (int j = 0; j <= 1; j++)
        {
            int p;
            cin >> p;
            temp.push_back(p);
        }
        cases.push_back(temp);
    }
    vector<int> ans = serviceLane(n, cases, width);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }



    return 0;
}
