function solution(arr) {
    var answer = [];
    for (let i in arr) {
        if (answer == []) {
            answer.push(arr[i]);
        } else if (arr[i] == answer[answer.length-1]) {
            answer.pop();
        } else if (arr[i] != answer[answer.length-1]) {
            answer.push(arr[i]);
        }
    }
    if (answer.length == 0) {
        answer.push(-1);
    }
    return answer;
}