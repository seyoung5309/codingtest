function solution(s) {
    var answer = s.split(' ');
    let max = answer[0], min = answer[0];
    for (let i = 0; i < answer.length; i++) {
        if (+answer[i] > +max) {
            max = answer[i];
        }
        if (+answer[i] < +min) {
            min = answer[i];
        }
    }
    answer = min + ' ' + max;
    return answer;
}