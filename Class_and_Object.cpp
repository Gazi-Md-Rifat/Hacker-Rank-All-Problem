// Hacker Rank Question Link : https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true

// Write your Student class here
class Student
{
    public:
    int a, b, c, d, e;
    void input()
    {
        cin >> a >> b >> c >> d >> e;
    }
    int calculateTotalScore()
    {
        int scores = a + b + c + d + e;
        return scores;
    }
};