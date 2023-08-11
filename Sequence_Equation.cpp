// Hacker Rank Question Link : https://www.hackerrank.com/challenges/permutation-equation/problem?isFullScreen=true


/*
 * Complete the 'permutationEquation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY p as parameter.
 */


// -------------------------- my code ------------------

vector<int> permutationEquation(vector<int> p) {
    vector<int> y;
    vector<int> temp;
    for (int i = 1; i <= p.size(); i++) // time complexity is O(N^2)
    {
        for (int j = 1; j <= p.size(); j++)
        {
            if (i == p[j - 1])
            {
                temp.push_back(j);
                break;
            }
        }
    }
    for (int i = 1; i <= temp.size(); i++) // time complexity is O(N^2)
    {
        for (int j = 1; j <= temp.size(); j++)
        {
            if (temp[i - 1] == p[j - 1])
            {
                y.push_back(j);
                break;
            }
        }
    }
    return y;
}

//.------------------------------------------ Optimized Code --------------------------------
vector<int> permutationEquation(vector<int> p)
{
    vector<int> ans;
    vector<int> temp (p.size() + 1);
    for (int i = 1; i <= p.size(); i++) // time complexity is O(N)
    {
        temp[p[i - 1]] = i;
    }
    for (int i = 1; i <= p.size(); i++) // time complexity is O(N)
    {
        ans.push_back(temp[temp[i]]);
    }
    
    return ans;
}