#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=false

int main (){

    string given_time, time, format, hour, minute_second;
    cin >> given_time;
    time = given_time.substr(0,8);
    format = given_time.substr(8,2);
    hour = given_time.substr(0,2);
    minute_second = given_time.substr(2,6);
    if (format == "AM"){
        if (hour == "12"){
            cout << "00" << minute_second;
        }
        else {
            cout << time;
        }
    }
    else {
        if (hour == "12"){
            cout << time;
        }
        else {
            cout << stoi(hour) + 12 << minute_second;
        }      
    }
    


    return 0;
}