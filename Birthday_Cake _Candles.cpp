#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true


int main (){

    int n;
    cin >> n;
    int candles[n];
    int max = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> candles[i];
        if (candles[i] > max){
            max = candles[i];
            count = 0;
        }
        if (max == candles[i]){
            count++;
        }
    }
    cout << count;
   
    




    return 0;
}