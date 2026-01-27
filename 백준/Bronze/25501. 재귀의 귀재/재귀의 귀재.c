#include <stdio.h>
#include <string.h>

int count;
int recursion(const char *s, int l, int r);
int isPalindrome(const char *s);

int main(){
    int n;
    scanf("%d", &n);

    char str[1001];
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        int result = isPalindrome(str);
        printf("%d %d\n", result, count);
    }
    return 0; 
}

int recursion(const char *s, int l, int r){
    count++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s){
    count = 0;
    return recursion(s, 0, strlen(s) - 1);
}
