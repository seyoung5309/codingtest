function solution(rank, attendance) {
    var answer = 0;
    let mul = 10000;
    for (let r in rank) {
        if (attendance[rank.indexOf((+r)+1)]) {
            answer += mul * rank.indexOf((+r)+1);
            mul /= 100;
            if (mul < 1) {
                break;
            }
        }
    }
    return answer;
}