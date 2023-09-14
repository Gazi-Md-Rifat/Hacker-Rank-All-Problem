// Hacker Rank Question Link : https://www.hackerrank.com/challenges/taum-and-bday/problem?isFullScreen=true


long taumBday(int b, int w, int bc, int wc, int z) {
    long BC = min(bc, wc + z);
    long WC = min(wc, bc + z);
    return b * BC + w * WC;
}