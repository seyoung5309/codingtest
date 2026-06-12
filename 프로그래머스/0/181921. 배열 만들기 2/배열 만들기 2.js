function solution(l, r) {
    var answer = [];
    for (let i = l; i <= r; i++) {
        let str = i + '';
        if (str.indexOf('1') > -1 || str.indexOf('2') > -1 || str.indexOf('3') > -1 || str.indexOf('4') > -1 || str.indexOf('6') > -1 || str.indexOf('7') > -1 || str.indexOf('8') > -1 || str.indexOf('9') > -1) {
            continue;
        }
        answer.push(i);
    }
    if (answer.length == 0) {
        answer.push(-1);
    }
    return answer;
}