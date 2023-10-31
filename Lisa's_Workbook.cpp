// Hacker Rank Question Link : https://www.hackerrank.com/challenges/lisa-workbook/problem?isFullScreen=true



int workbook(int n, int k, vector<int> arr) {
    int special_problem = 0;
	int page = 1;

	for (int i = 0; i < n; i++){
		int count = 0;
		for (int j = 1; j <= arr[i]; j++){
			count++;
			if (count > k){
				page++;
				count = 1;
			}
			if (j == page){
				special_problem++;
			}
		}
		page++;
	}

    return special_problem;
}