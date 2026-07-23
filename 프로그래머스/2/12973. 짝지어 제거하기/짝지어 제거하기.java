import java.util.ArrayList;

class Solution {
    public int solution(String s) {
        ArrayList<Character> arr = new ArrayList<>();

        for (int i = 0; i < s.length(); i++) {
            if (!arr.isEmpty() && s.charAt(i) == arr.get(arr.size() - 1)) {
                arr.remove(arr.size() - 1);
            } else {
                arr.add(s.charAt(i));
            }
        }

        return arr.isEmpty() ? 1 : 0;
    }
}