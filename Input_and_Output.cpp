#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/cpp-input-and-output/problem?isFullScreen=true

int main (){
    int n;
    int sum = 0;
    for (int i = 0; i < 3; i++){
        cin >> n;
        sum +=n;

    }
    cout << sum ;



    return 0;
}