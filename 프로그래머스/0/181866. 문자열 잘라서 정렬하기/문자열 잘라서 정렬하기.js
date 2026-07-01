function solution(myString) {
    var answer = [];
    var tmp = "";
    for (let m of myString) {
        if (m != "x") {
            tmp += m;
        } else {
            if (tmp == "") {
                continue;
            }
            answer.push(tmp);
            tmp = "";
        }
    }
    if (tmp != "") {
        answer.push(tmp);
    }
    answer.sort();
    return answer;
}