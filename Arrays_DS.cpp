// Hacker Rank Question Link : https://www.hackerrank.com/challenges/arrays-ds/problem?isFullScreen=true


// reverse arry function.

vector<int> reverseArray(vector<int> a) {
    vector<int> temp;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int x = a[i];
        temp.push_back(x);
    }
    return temp;
}



