// Hacker Rank Question Link : https://www.hackerrank.com/challenges/array-left-rotation/problem?isFullScreen=true


/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> ans(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        if ( i < d)
        {
            ans[arr.size() - d + i] = arr[i];
        }
        else
        {
            ans[i - d] = arr[i];
        }
    }
    return ans;
}