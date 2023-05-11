#include <iostream>
using namespace std;


// Hacker Rank Question Link : https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true&h_r=next-challenge&h_v=zen


int main (){


    int element_1,element_2;
    cin >> element_1 >> element_2;
    cout << element_1 + element_2 << endl;

    if (element_1 > element_2){
        cout << element_1 - element_2;
    }
    else{
        cout << element_2 - element_1;
    }


    return 0;
}