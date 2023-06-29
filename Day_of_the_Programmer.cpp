#include <bits/stdc++.h>
using namespace std;

// Hacker Rank Questiion Link : https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true
string dayOfProgrammer(int year)
{
    int day_of_month[12] = {31,28,31,30,31,30,31,31,20,31,30,31},  total = 0, month = 0, day = 0;
    string dd, mm,yyyy = to_string(year), ans = "";
    if (year >= 1917)
    {   
        if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
        {
            day_of_month[1] = 29;
        }
    }
    if (year < 1917)
    {

        if (year % 4 == 0)
        {
            day_of_month[1] = 29;
        }
    }

    for (int i = 0; i < 12; i++)
    {
        if (day_of_month[i] + total <= 256)
        {
            total = total + day_of_month[i];
        }
        else
        {
            month = i + 1;
            break;
        }
    }

    day = 256 - total;
    if (year == 1918) // speciel case ....1918 is leap year..so increase 1 day and extra 13 ..total increase 14...this case only for 1918...
    {
        day = day + 13;
    }
    if (day < 10 || month < 10)
    {
        if (day < 10)
        {
            dd = "0" + to_string(day);
        }
        if (month < 10)
        {
            mm = "0" + to_string(month);
        }
       
    }
    if (day > 9 || month > 9)
    {
        if (day >= 10)
        {
            dd = to_string(day);
        }
        if (month >= 10)
        {
            mm = to_string(month);
        }

    }
    ans = dd + "." + mm + "." + yyyy;





    return ans;
}

int main ()
{
    int year;
    cin >> year;
    string ans = dayOfProgrammer(year);
    cout << ans;

    return 0;
}