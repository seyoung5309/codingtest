function solution(arr)
{
    var answer = [];
    let index = 0;

    answer[index++] = arr[0];
    for (let i = 1; i < arr.length; i++) {
        if (arr[i-1] != arr[i]) {
            answer[index++] = arr[i];
        }
    }
    
    return answer;
}