// Hacker Rank Question Link : https://www.hackerrank.com/challenges/camelcase/problem?isFullScreen=true


int camelcase(string s) {
    int count = 1;
    if (s.length() == 0)
    {
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
        {
            count++;
        }
    }
    return count;
}