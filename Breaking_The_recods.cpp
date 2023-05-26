#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true


int main (){

    int game_number, max_score = 0, min_score = 0, max_count = 0, min_count = 0;
    cin >> game_number;
    int game_score[game_number];
    for (int i = 0; i < game_number; i++){
        cin >> game_score[i];

        if (i == 0){
            max_score = game_score[i];
            min_score = game_score[i];
        }
        if (i > 0){
            if (game_score[i] > max_score){
                max_count++;
                max_score = game_score[i];
            }
            if(game_score[i] < min_score){
                min_count++;
                min_score = game_score[i];
            }
        }
    }
    cout << max_count << " " << min_count;



    return 0;
}