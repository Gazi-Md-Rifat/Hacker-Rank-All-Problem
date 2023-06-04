#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true


int main (){

    int n;
    cin >> n;
    int bird_sightings[n];
    int count[n] ={0};
    int max_count = 0;
    int result = 0;
    for (int i = 0; i < n; i++){
        cin >> bird_sightings[i];
        count[bird_sightings[i]]++;
        if (count[bird_sightings[i]] > max_count){
            max_count = count[bird_sightings[i]];
        }
    }
    // cout << max_count;
    for (int i = 0; i < n; i++){
        if (max_count == count[i]){
            result = i;
            break;
        }
    }
    cout << result;


    return 0;
}