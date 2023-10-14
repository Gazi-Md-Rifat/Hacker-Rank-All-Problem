// Hacker Rank Question Link : https://www.hackerrank.com/challenges/halloween-sale/problem?isFullScreen=false





int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy 
   int result = 0;
    while( s >= p){
        s -= p;
        p = max(m, p-d);
        result++;
    }
    return result;
}