#include <iostream>
using namespace std;

// Hacker Rank Question link : https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true

int main (){

    int n;
    cin >> n;
    int m = n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j >= (m-1) - i){
                cout << "#";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }





    return 0;
}