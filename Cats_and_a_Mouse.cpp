#include <iostream>
#include <vector>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/cats-and-a-mouse/problem?isFullScreen=false

string cat_and_mouse(int x, int y, int z)
{
    string ans;
    int one = abs(x - z), two = abs(y - z);
    if (one > two)
    {
        ans = "Cat B";
        return ans;
    }
    else if (one < two)
    {
        ans = "Cat A";
        return ans;
    }
    else 
    {
        ans = "Mouse C";
        return ans;
    }
}

int main ()
{
    int queries;
    cin >> queries;
    vector<string> store;
    
    for (int i = 0; i < queries; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        string answer = cat_and_mouse(x, y, z);
        store.push_back(answer);
    }
    for (int i = 0; i < queries; i++)
    {
        cout << store[i] << endl;
    }




    return 0;
}