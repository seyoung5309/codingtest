function solution(s) {
    let steak = [];
    
    for (let i of s) {
        if (i === '(') {
            steak.push(i);
        } else {
            if (steak.length === 0) {
                return false;
            }
            steak.pop()
        }
    }
    
    if (steak.length !== 0) {
        return false;
    }
    
    return true;
}