class Solution {
    public int solution(String my_string, String is_suffix) {
        String cheak = "";
        for (int i = 0; i < my_string.length(); i++) {
            for (int j = i; j < my_string.length(); j++) {
                cheak += my_string.charAt(j);
            }
            if (cheak.equals(is_suffix)) {
                return 1;
            }
            cheak = "";
        }
        return 0;
    }
}