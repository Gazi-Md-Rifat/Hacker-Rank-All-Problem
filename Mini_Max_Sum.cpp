#include <iostream>
#include <algorithm>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

int main (){

    int n = 5;
    long long sum = 0;
    int element[n];
    for (int i = 0; i < n; i++){
        cin >> element[i];
        sum += element[i];
    }
    sort(element, element + n);
    cout << sum - element[n - 1] << " " << sum - element[0];




    return 0;
}