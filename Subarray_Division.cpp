#include <iostream>
using namespace std;

// Hacker Ranke Question Link : https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true

int main (){

    int n, d, m, count = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> d >> m;

    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < m; j++){
            sum += array[i + j];
        }
        if (sum == d){
            count++;
        }
    }
    cout << count;

    return 0;
}