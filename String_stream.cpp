// Hacker Rank Question Link : https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem


vector<int> parseInts(string str) {
	// Complete this function
    vector<int> ans;
    stringstream ss (str);
    int a; char ch;
    while (!ss.eof())
    {
        ss >> a >> ch;
        ans.push_back(a);
    }
    return ans;
}