#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen


void reverse_function(int n,int array[]){

    if (n == 0){
        return;
    }
    cout << array[n-1] << " ";
    reverse_function(n - 1,array);   // recursive call

}

int main (){

    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    reverse_function(n,array);




    return 0;
}