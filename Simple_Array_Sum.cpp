#include <iostream>
#include <iomanip>
using namespace std;

// Hacker Rank Question link :https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true

int main (){

    int n, sum = 0;
     cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
        sum += array[i];
    }
    cout << sum;

    return 0;
}