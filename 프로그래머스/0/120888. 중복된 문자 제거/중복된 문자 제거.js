function solution(my_string) {
    var answer = '';
    let a;
    for (let m in my_string) {
        a = my_string[m];
        if (answer.indexOf(my_string[m]) < 0) {
            answer += a;
        }
    }
    return answer;
}