// Hacker Rank Question Link : https://www.hackerrank.com/challenges/beautiful-triplets/problem?isFullScreen=true




/*
 * Complete the 'beautifulTriplets' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

int beautifulTriplets(int d, vector<int> arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int val = arr[i], count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] - val == d)
            {
                val = arr[j];
                count = count + 1;
                if (count == 3)
                {
                    ans = ans + 1;
                    break;
                }
            }
        }
    }
    return ans;
}