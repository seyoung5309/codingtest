function solution(s) {
    var answer = 0;
    let temp;
    let arr = s.split(" ");
    for (let a of arr) {
        if (a == "Z") {
            answer -= temp;
            continue;
        } 
        answer += +a;
        temp = +a;
    }
    return answer;
}