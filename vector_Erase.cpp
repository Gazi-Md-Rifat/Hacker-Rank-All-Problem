#include <iostream>
#include <vector>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true


int main (){

    int n, a, b, c;
    cin >> n;
    vector<int> element;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        element.push_back(x);
    }

    cin >> a >> b >> c;
    element.erase(element.begin()+(a-1));
    element.erase(element.begin()+(b-1),element.begin()+(c-1));
    cout << element.size() << endl;
    for (int i = 0; i < element.size(); i++){
        cout << element[i] << " ";
    }





    return 0;
}
