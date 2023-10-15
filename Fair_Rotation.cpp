// Hacker Rank Question Link : https://www.hackerrank.com/challenges/fair-rations/problem?isFullScreen=true


string fairRations(vector<int> arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++){
        if (i < arr.size() - 1){
            if (arr[i] % 2 != 0){
                arr[i]++;
                arr[i + 1]++;
                count += 2;
            }
        }
        if (arr[i] % 2 != 0){ // this condition bassicaly i == arr.size() - 1; if last idx have odd value which value we can't make even becauge conditon is if i make odd to even then must do (i + 1) idx value + 1.so last idx have odd then no scop to i+1 idx value + 1..becauge we reach our size..that mean no scop for odd to even..
            return "NO";
        }
    }
    string ans = to_string(count);
    return ans;
}