function solution(quiz) {
    var answer = [];
    let arr, math, num;
    for (let q of quiz) {
        arr = q.split("=")
        if (arr[0].indexOf('+') > 0) {
            math = arr[0].split(" + ");
            if (+arr[1] === +(math[0]) + +(math[1])) {
                answer.push("O");
            } else {
                answer.push("X");
            }
        } else {
            math = arr[0].split(" - ");
            if (+arr[1] === +(math[0]) - +(math[1])) {
                answer.push("O");
            } else {
                answer.push("X");
            }
        }
    }
    return answer;
}