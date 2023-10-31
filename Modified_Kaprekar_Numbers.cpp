// Hacker Rank Question Link : https://www.hackerrank.com/challenges/kaprekar-numbers/problem?isFullScreen=true

void kaprekarNumbers(int p, int q) {
    bool indicator = false;
    for (int i = p; i <= q; i++){
        long long n = pow(i, 2);
        stack<int> temp;
        while(n > 0){
            temp.push(n % 10);
            n = n / 10;
        }
        int l_sum = 0, r_sum = 0;
        int size = temp.size();
        for (int j = 1; j <= size; j++){
            if (j <= size / 2){
                l_sum = (l_sum * 10) + temp.top();
                temp.pop();
            }
            else {
                r_sum = (r_sum * 10) + temp.top();
                temp.pop();
            }
        }
        if (i == l_sum + r_sum){
            cout << i << " ";
            indicator = true;
        }
    }
}