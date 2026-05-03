function solution(myString) {
    var answer = myString.split("x");
    for (let i = 0; i < answer.length; i++) {
        if (answer[i] == '') {
            answer.splice(i--, 1);
        }
    }
    answer = answer.sort();
    return answer;
}