// Hacker Rank Question Link : 

int flatlandSpaceStations(int n, vector<int> c) { // time complexity is O(N^n)
    if (n == c.size()){
        return 0;
    }
    int distance = 0;
    for (int i = 0; i < n; i++){ // O(N);
        int temp = INT_MAX;
        for (int j = 0; j < c.size(); j++){ // O(n) .. n = c.size();
            temp = min(temp, abs(c[j] - i));
        }
        distance = max(distance, temp);
    }

    return distance;
}