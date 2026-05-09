function solution(str_list) {
    var answer = [];
    for (let s in str_list) {
        if (str_list[+s] === 'l') {
            answer = str_list.slice(0, +s);
            break;
        } else if (str_list[+s] === 'r') {
            answer = str_list.slice(+s+1);
            break;
        }
    }
    return answer;
}