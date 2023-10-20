// Hacker Rank Question Link : https://www.hackerrank.com/challenges/sherlock-and-squares/problem?isFullScreen=true

int squares(int a, int b) {
    int ans = 0;
    for (int i = sqrt(a); i <= sqrt(b); i++){ // time O(sqrt(b) - sqrt(a));
        int number = pow(i, 2);
        if (number >= a && number <= b){
            ans++;
        }
    }
    return ans;
}