function solution(A, B) {
    let arr_a = A.split('');
    let arr_b = B.split('');

    for (let i = 0; i < A.length; i++) {

        if (arr_a.join('') === arr_b.join('')) {
            return i;
        }

        let a = arr_a.pop();
        arr_a.unshift(a);
    }

    return -1;
}