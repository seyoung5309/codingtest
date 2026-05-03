function solution(my_string) {
    var answer = my_string.split(" ");
    for (let m = 0; m < answer.length; m++) {
        if (answer[m] == "") {
            answer.splice(m, 1);
            m--;
        }
    }
    return answer;
}