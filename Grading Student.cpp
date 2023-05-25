#include <iostream>
#include <vector>

using namespace std;

// Hacker Rank Questiion Link : https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true

int main (){

    int n;
    cin >> n;
    vector<int> final_grade;
    int grade[n];
    for (int i = 0; i < n; i++){
        cin >> grade[i];
        if (grade[i] % 5 > 2 && grade[i] >= 38){
            int x = grade[i] + (5 - (grade[i] % 5));
            final_grade.push_back(x);
        }
        else {
            final_grade.push_back(grade[i]);
        }
    }
    
    for (int i = 0; i < n; i++){
        cout << final_grade[i] << endl;
    }
  


    return 0;
}