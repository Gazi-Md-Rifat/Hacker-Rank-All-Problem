#include <iostream>
using namespace std;


// Hacker Rank Question Link : https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true


int main (){

    int a,b;
    cin >> a >> b;

    string represntation[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for (int i = a; i <= b; i++){
        if (i <= 9){ 
            cout << represntation[i] << endl;
        }
        if (i > 9){
            if (i % 2 == 0){
                cout << "even" << endl;
            }
            else{
                cout << "odd" << endl;
            }
        }
    }





    return 0;
}