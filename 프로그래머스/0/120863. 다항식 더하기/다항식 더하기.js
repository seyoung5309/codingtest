function solution(polynomial) {
    let terms = polynomial.split(' + ');
    let x = 0, n = 0;

    for (let term of terms) {
        if (term.includes('x')) {
            let coef = term.replace('x', '');
            x += coef === '' ? 1 : Number(coef);
        } else {
            n += Number(term);
        }
    }

    if (x === 0) return `${n}`;
    if (n === 0) return x === 1 ? 'x' : `${x}x`;
    return `${x === 1 ? 'x' : x + 'x'} + ${n}`;
}
