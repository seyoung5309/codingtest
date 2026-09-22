class Solution {
    public int solution(int[][] board) {
        int answer = 0;
        int [][]rl = {
            {-1, 1}, {0, 1}, {1, 1}, 
            {1, 0}, {1, -1}, {0, -1}, 
            {-1, -1}, {-1, 0}};
        
        int tr, tl;
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board.length; j++) {
                if (board[i][j] == 1) {
                    tr = i;
                    tl = j;
                    for (int l = 0; l < rl.length; l++) {
                        if (tr + rl[l][0] < 0 || tr + rl[l][0] >= board.length 
                            || tl + rl[l][1] < 0 || tl + rl[l][1] >= board.length) {
                            continue;
                        }
                        if (board[tr + rl[l][0]][tl + rl[l][1]] == 1) {
                            continue;
                        }
                        board[tr + rl[l][0]][tl + rl[l][1]] = 2;
                    }
                }
            }
        }
        
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board.length; j++) {
                if (board[i][j] == 0) {
                    answer++;
                }
            }
        }
        
        return answer;
    }
}