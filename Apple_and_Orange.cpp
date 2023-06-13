#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true


int main ()
{
    int same_house_start, same_house_end, apple_tree_location, orange_tree_location, apple_number, orange_number, apple_count = 0, orange_count = 0;
    cin >> same_house_start >> same_house_end >> apple_tree_location >> orange_tree_location >> apple_number >> orange_number;
    int apple_tree[apple_number];
    int orange_tree[orange_number];
    for (int i = 0; i < apple_number; i++)
    {
        cin >> apple_tree[i];
        if (apple_tree_location + apple_tree[i] >= same_house_start && apple_tree_location + apple_tree[i] <= same_house_end)
        {
            apple_count++;
        }
    }
    for (int i = 0;  i < orange_number; i++)
    {
        cin >> orange_tree[i];
        if (orange_tree_location + orange_tree[i] >= same_house_start && orange_tree_location + orange_tree[i] <= same_house_end)
        {
            orange_count++;
        }
    }
    cout << apple_count << endl << orange_count;



    return 0;
}