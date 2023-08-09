#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    vector<vector<int>> data; // for query
    for (int i = 0; i < q; i++)
    {
        vector<int> temp;
        int size;
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        data.push_back(temp);
    }

    vector<pair<int,int>> value; // for i and j 
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin>> x >> y;
        value.push_back(make_pair(x, y));
        // i can print data on this loop ...like 
        // cout << data[x][y] << endl;  ... if i write this code then i don't need vector<pair....because i direct use x which is query number and j which is id of query[i]....
       
    }
    for (int i = 0; i < q; i++)
    {
        cout << data[value[i].first][value[i].second] << endl;
    }
    return 0;
}
