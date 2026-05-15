// push, shift

function solution(priorities, location) {
    let n, count = 1, check = true;
    while (priorities.length > 0) {
        n = priorities.shift();
        for (let i of priorities) {
            if (n < i) {
                check = false;
                break;
            }
        }
        
        if (check) {
            if (location == 0) {
                return count;
            }
            count++;
        } else {
            priorities.push(n);
        }
        if (location <= 0) {
            location = priorities.length - 1;
        } else {
            location--;
        }
        
        check = true;
    }
    return -1;
}