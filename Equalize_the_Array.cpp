// Hacker Rank Questioin Link : https://www.hackerrank.com/challenges/equality-in-a-array/problem?isFullScreen=true


int equalizeArray(vector<int> arr) {
    int n = arr.size();
    int duplicate = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count = count + 1;
            }
        }
        duplicate = max(duplicate, count);
    }
    return n - duplicate;
}