#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;


// Hackr Rank Question Link : https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true



int main (){

    int max_num = INT_MIN;
    int element;
    for (int i = 0; i < 4; i++){
        cin >> element;
        max_num = max(max_num,element);
    }
    cout << max_num;


    return 0;
}