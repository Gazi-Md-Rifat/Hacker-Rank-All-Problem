// Hacker Rank Question Link : https://www.hackerrank.com/challenges/save-the-prisoner/problem?isFullScreen=true

int saveThePrisoner(int n, int m, int s) {
    //  if i can find the circle.circle mean how many full travel can i done and how mnay extra move i have ..thats mean full circle mean when my start then (same place - 1) my end but extra move is start + extra move that my new place..
    
    // when i find my extra move this extra move is from starting point but we need find 1 to n place .thats mean s - 1 that is my real start or 0 point..then add extra move with 0 point or real starting point.

    int ans = m % n + s - 1;
    if (ans == 0){ //there can have some situation..like all are my full travel .i don't have extra move thats mean my start is strating point and end is ending point thats mean (start - 1) pourpose of circle.
        return n;
    }
    if (ans > n){ // ans  > n means we have full travel and some extra move..again we find extra move .this extra move from 0 point that we calculate in first statement..so we don't need again add with 0 point.
        return ans % n;
    }
    return ans;
}
