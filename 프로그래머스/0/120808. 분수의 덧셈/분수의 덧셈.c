int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    
    int d = numer1 * denom2 + numer2 * denom1;
    int c = denom1 * denom2;                

    int gcd = 1;
    for (int i = 1; i <= d && i <= c; i++) {
        if (d % i == 0 && c % i == 0) {
            gcd = i;
        }
    }

    answer[0] = d / gcd;
    answer[1] = c / gcd;

    return answer;
}
