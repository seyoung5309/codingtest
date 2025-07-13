import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        
        char []ans = new char[a.length()];
        for (int i = 0; i< ans.length; i++) {
            ans[i] = a.charAt(i);
        }
        
        char []n = new char[26];
        char []m = new char[26];
        for (int i = 0; i < 26; i++) {
            n[i] = (char)('a'+i);
            m[i] = (char)('A'+i);
        }
        
        String re = "";
        
        for (int i = 0; i< ans.length; i++) {
            if(ans[i] >= 'a' || ans[i] <= 'z') {
                for (int j = 0; j < 26; j++) {
                    if (ans[i] == n[j]) {
                        re = re + m[j];
                    }
                }
            } 
            if (ans[i] >= 'A' || ans[i] <= 'Z') {
                for (int u = 0; u < 26; u++) {
                    if (ans[i] == m[u]) {
                        re = re + n[u];
                    }
                }
            }
        }
        System.out.print(re);
    }
}