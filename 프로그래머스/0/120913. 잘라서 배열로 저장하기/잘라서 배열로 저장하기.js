function solution(my_str, n) {
    var answer = [];
    let str = "";
    let count = 0;
    
    for (let m of my_str) {
        if (count == n) {
            answer.push(str);
            str = "";
            count = 0;
        }
        str += m;
        count++;
    }
    
    if (str.length > -1) {
        answer.push(str);
    }
    
    return answer;
}