#include <iostream>
using namespace std;


// Hacker Rank Question Link : https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true


int main (){

    string element_1,element_2;
    cin >> element_1 >> element_2;
    cout << element_1.length() << " " << element_2.length() << endl;
    cout << element_1 + element_2 << endl;

    // value never be changed
    // cout << element_2.substr(0,1) + element_1.substr(1,element_1.length()) << " " << element_1.substr(0,1) + element_2.substr(1,element_2.length());
   
   
   // value permanently changed untill backtrack....
    char temp = element_1[0];
    element_1[0] = element_2[0];
    element_2[0] = temp;

    cout << element_1 << " " << element_2;




    return 0;
}