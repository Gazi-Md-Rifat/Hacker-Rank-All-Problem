#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/strange-advertising/problem?isFullScreen=true

int viral_advertising(int n)
{
    int liked_people = 5 / 2; // first day 5 people constant..
    int count_people = 5 / 2;
    while (n > 1)
    {
        int people = liked_people * 3 / 2; // per people share their 3 friends..
        liked_people = people;
        count_people += people;
        n--;
    }

    return count_people;
}

int main ()
{
    int target_day;
    cin >> target_day;
    
    cout << viral_advertising(target_day);


    return 0;
}