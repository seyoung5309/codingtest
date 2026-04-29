function solution(arr, query) {
    for (let i in query) {
        if ((i & 1) === 0) { // 짝
            arr = arr.slice(0, query[i]+1);    
        } else { // 홀 
            arr = arr.slice(query[i], arr.length);
        }
    }
    return arr;
}