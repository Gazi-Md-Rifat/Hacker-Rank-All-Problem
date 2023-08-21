// Hacker Rank Question Link : https://www.hackerrank.com/challenges/chocolate-feast/problem?isFullScreen=true


int chocolateFeast(int n, int c, int m) {
    int count = n / c;
    int chocolate = n / c;
    while (chocolate >= m)
    {
        count = count + (chocolate / m);
        chocolate = (chocolate / m) + (chocolate % m);
    }
    return count;
}