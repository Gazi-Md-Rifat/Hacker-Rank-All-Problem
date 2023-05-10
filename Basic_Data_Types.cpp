#include <iostream>
#include <iomanip>
using namespace std;



// Hacker Rank Question Link : https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true


int main (){

    int element_1;
    long element_2;
    char element_3;
    float element_4;
    double element_5;

    cin >> element_1 >> element_2 >> element_3 >> element_4 >> element_5;

    cout << element_1 << endl << element_2 << endl << element_3 << endl << fixed << setprecision(3) << element_4 << endl << fixed << setprecision(9) << element_5;





    return 0;
}