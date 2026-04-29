function solution(picture, k) {
    var answer = [];
    let str = ""
    for (let p of picture) {
        for (let i of p) {
            for (let x = 0; x < k; x++) {
                str += i;
            }
        }
        for (let x = 0; x < k; x++) {
            answer.push(str);            
        }
        str = "";
    }
    return answer;
}