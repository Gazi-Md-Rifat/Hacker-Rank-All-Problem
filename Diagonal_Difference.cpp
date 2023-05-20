#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

int main (){

    int n, m;
    cin >> n;
    int count = n;
    m = n;
    int left_to_right = 0 , right_to_left = 0;
    int matrix[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];

            // diagonal addition in on loop....only for reduce time complexcity............
            if (i == j){
                left_to_right += matrix[i][j];
            }
            if (j == count - 1){
                right_to_left += matrix[i][j];
                count --;
            }
        }
    }
    // cout << "result is : " << left_to_right << " " << right_to_left;
    if (right_to_left > left_to_right){
        cout << right_to_left - left_to_right;
    }
    else {
        cout << left_to_right - right_to_left;
    }





    return 0;
}