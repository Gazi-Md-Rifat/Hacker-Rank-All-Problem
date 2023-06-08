#include <iostream>
#include <string>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/counting-valleys/problem


int main (){
    int number_of_step , sea_level = 0, count_valley = 0;
    cin >> number_of_step;
    string path;
    cin >> path;
    for (int i = 0; i < number_of_step; i++){
        if (path[i] == 'U'){
            sea_level++;
        }
        else{ 
           sea_level--;
        }
        if (path[i] == 'U' && sea_level == 0){
            count_valley++;
        } 
    }

    cout << count_valley;

    return 0;
}