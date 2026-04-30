function solution(array, commands) {
    var answer = [];
    let array_copy = [];
    let temp;
    
    for (let c of commands) {
        array_copy = array;
        array_copy = array_copy.slice(c[0]-1, c[1]);
        for (let i = 0; i < array_copy.length; i++) {
            for (let j = 0; j < array_copy.length; j++) {
                if (array_copy[i] < array_copy[j]) {
                    temp = array_copy[j];
                    array_copy[j] = array_copy[i];
                    array_copy[i] = temp;
                }
            }
        }
        console.log(array_copy);
        answer.push(array_copy[c[2]-1]);
    }
    return answer;
}