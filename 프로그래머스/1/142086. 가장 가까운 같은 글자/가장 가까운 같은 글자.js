function solution(s) {
    var answer = [];
    let check = -1;

    for (let i = 0; i < s.length; i++) {
        for (let j = i - 1; j >= 0; j--) {
            if (s[i] === s[j]) {
                check = j;
                break;
            }
        }

        if (check !== -1) {
            answer.push(i - check);
        } else {
            answer.push(-1);
        }

        check = -1;
    }

    return answer;
}