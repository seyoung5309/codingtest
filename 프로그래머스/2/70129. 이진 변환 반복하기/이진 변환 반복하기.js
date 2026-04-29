function solution(s) {
    var answer = [0, 0];
    while (s != '1') {
        for (let i = 0; i < s.length; i++) {
            if (s[i] == '0') {
                s = s.replace('0', '');
                answer[1]++;
                i--;
            }
        }
        s = s.length.toString(2);
        answer[0]++;
    }
    return answer;
}