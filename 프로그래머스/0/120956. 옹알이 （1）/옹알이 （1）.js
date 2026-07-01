function solution(babbling) {
    var answer = 0;
    var tmp = "";
    for (let baby of babbling) {
        tmp = "";
        for (let b of baby) {
            tmp += b;
            if (tmp == "aya" || tmp == "ye" || tmp == "woo" || tmp == "ma") {
                tmp = "";
            }
        }
        if (tmp == "") {
            answer++;
        }
    }
    return answer;
}