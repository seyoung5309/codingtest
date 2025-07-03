class Solution {
    public String[] solution(String[] todo_list, boolean[] finished) {
        
        int count = 0; 
        
        for (int i = 0; i < finished.length; i++) {
            if (finished[i] != true) {
                count++;
            }
        }
        
        String[] answer = new String[count];
        int num = 0; 
        
        for (int i = 0; i < todo_list.length; i++) {
            if (finished[i] != true) {
                answer[num] = todo_list[i];
                num++;
            }
        }
        
        return answer;
    }
}