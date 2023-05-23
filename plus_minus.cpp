#include <iostream>
#include <iomanip>
using namespace std;

// Hacker Rank Question link : https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

int main (){

    int n ;
    cin >> n;
    int possitive = 0, negative = 0, zero = 0;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
        if (array[i] >=1){
            possitive++;
        }
        else if (array[i] == 0){
            zero++;
        }
        else {
            negative++;
        }

    }
    
    cout << showpoint << setprecision(6);
    cout <<(double)possitive / n << endl << (double)negative / n << endl << (double)zero / n;
    

    return 0;
}