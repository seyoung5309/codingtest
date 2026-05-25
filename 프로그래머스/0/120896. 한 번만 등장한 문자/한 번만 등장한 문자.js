function solution(s) {
    var answer = '';
    let check = false;
    for (let i = 0; i < s.length; i++) {
        for (let j = 0; j < s.length; j++) {
            if (i == j) {
                continue;
            }
            if (s[i] === s[j]) {
                check = true;
                break;
            }
            check = false;
        }
        if (check) {
            continue;
        } 
        check = false;
        answer += s[i];
        answer = answer.split('').sort().join('');
    }
    return answer;
}