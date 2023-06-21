#include <bits/stdc++.h>
using namespace std;

// Hacekr Ranke Question Link : https://www.hackerrank.com/challenges/designer-pdf-viewer/problem?isFullScreen=true

int designer_PDF_viewer(vector<int> a, string word)
{
    int word_size = word.length();
    int max_height = 0;
    for (int i = 0; i < word_size; i++)
    {
        int letter_height =  a[(word[i] - 96) - 1]; // char to integer conversion and find the serial number of a to z ...
        if (max_height < letter_height)
        {
            max_height = letter_height;
        }
    }
    
    return word_size * max_height;
}

int main ()
{
    vector<int> height;
    string word;
    for (int i = 0; i < 26; i++)
    {
        int x;
        cin >> x;
        height.push_back(x);
    }
    cin >> word;
    cout << designer_PDF_viewer(height, word);


    return 0;
}