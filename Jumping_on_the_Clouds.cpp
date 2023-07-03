// Hacker Rank Question Link : https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?isFullScreen=true


// Function...

int jumpingOnClouds(vector<int> c) 
{   
    int count = -1;
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == 0)
        {
            if (i < c.size() - 2)
            {
                if (c[i+1] == 0 && c[i+2] == 0)
                {
                    count++;
                    i++;
                }
                else 
                {
                    count++;
                }
            }
            else
            {
                count++;
            }
        }
    }
    
    return count;
}