#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/sock-merchant/problem?isFullScreen=true

int main (){

    int n, sum = 0;
    cin >> n;
    int sock[n];
    int count_sock[101] = {0}; // SIZE = 101 becauge size of sock[i] is   1 <= sock[i] <= 100. this value given in constrain section. that's why my count_sock is (max value of sock + 1)....
    for (int i = 0; i < n; i++){
        cin >> sock[i];
        count_sock[sock[i]]++;
    }
    for (int i = 0; i < sizeof(count_sock) / sizeof(count_sock[0]); i++){
        if (count_sock[i] > 1){
            sum += count_sock[i] / 2;
        }
    }
    cout << sum ;



    return 0;
}