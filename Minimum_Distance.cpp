// Hacker Rank Question Link : https://www.hackerrank.com/challenges/minimum-distances/problem?isFullScreen=true



/*
 * Complete the 'minimumDistances' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int minimumDistances(vector<int> a) {
    int ans = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        int x = 0;
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] == a[j])
            {
                x = j - i;
                ans = min(ans, x);
                break;
            }
        }
    }
    if (ans != INT_MAX)
    {
        return ans;
    }
    return -1;
}