function solution(n) {
    let answer = 1;
    let sum = 0; 
    for (let i = 1; i < n; i++) {
        for (let j = i; j < n; j++) {
            sum += j;
            if (sum == n) {
                answer++;
                break;
            }
            if (sum > n) {
                break;
            }
        }
        sum = 0;
    }
    return answer;
}

