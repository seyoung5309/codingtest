function solution(n) {
    var answer = 0;
    
    let n3 = [];
    while (n !== 0) {
        n3.push(n%3);
        n = parseInt(n/3);
    }
    
    let mul = 1;
    while (n3.length != 0) {
        answer += n3.pop() * mul;
        mul *= 3;
    }
    return answer;
}