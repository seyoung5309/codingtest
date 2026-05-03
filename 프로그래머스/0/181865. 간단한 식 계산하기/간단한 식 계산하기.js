function solution(binomial) {
    var answer = 0;
    let n;
    if (binomial.indexOf("+") > -1) {
        n = binomial.split(" + ");
        answer = +n[0] + +n[1];
    } else if (binomial.indexOf("-") > -1) {
        n = binomial.split(" - ");
        answer = +n[0] - +n[1];
    } else {
        n = binomial.split(" * ");
        answer = +n[0] * +n[1];
    }
    return answer;
}