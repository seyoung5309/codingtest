function solution(spell, dic) {
    let check = true;
    for (let d of dic) {
        for (let s of spell) {
            if (d.indexOf(s) === -1) {
                check = false;
                break;
            }
        }
        if (check) {
            return 1;
        }
        check = true;
    }
    return 2;
}