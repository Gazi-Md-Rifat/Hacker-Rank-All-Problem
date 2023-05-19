#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true

int main (){
    
    int n = 3;
    int bob_point = 0, alice_point = 0;
    int bob[n], alice[n];
    for (int i = 0 ; i < n; i++){
        cin >> alice[i];
    }
    for (int i = 0 ; i < n; i++){
       cin >> bob[i];
       
        if (bob[i] > alice[i]){
            bob_point ++;
        }
        else if (bob[i] < alice[i]){
            alice_point ++;
        }
       
        
    }
    cout << alice_point << " " << bob_point;
    
    return 0;
}
