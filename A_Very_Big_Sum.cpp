#include <iostream>
using namespace std;

// Hacker Ranke Question Link : https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true

int main (){

    int n;
    cin >> n;
    long long int  value[n] , sum = 0;
    for (int i = 0; i < n; i++){
        cin >> value[i];
        sum += value[i];
    }
    cout << sum;

    return 0;
}