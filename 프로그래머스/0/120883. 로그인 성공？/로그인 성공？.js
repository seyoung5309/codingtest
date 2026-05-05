function solution(id_pw, db) {
    var answer = "fail";
    for (let d of db) {
        if (id_pw[0] == d[0]) {
            if (id_pw[1] == d[1]) {
                return "login";
            } else {
                answer = "wrong pw"
            }
        }
    }
    return answer;
}