#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true


int main (){

    int n, k, count = 0;
    cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if ((array[i] + array[j]) % k == 0){
                count++;
            }
        }
    }

    cout << count;

    return 0;
}