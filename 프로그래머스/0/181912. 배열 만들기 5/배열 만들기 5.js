function solution(intStrs, k, s, l) {
    var answer = [];
    let arr = [];
    for (let i of intStrs) {
        arr.push(+i.substr(s, l));
    }
    for (let i of arr) {
        if (i > k) {
            answer.push(i);
        }
    }
    return answer;
}