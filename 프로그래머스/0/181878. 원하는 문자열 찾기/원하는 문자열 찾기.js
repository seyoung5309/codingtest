function solution(myString, pat) {
    myString = myString.toLowerCase();
    pat = pat.toLowerCase();
    if (myString.indexOf(pat) < 0) {
        return 0;
    } 
    return 1;
}