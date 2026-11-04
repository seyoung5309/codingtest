import java.util.*;

class Solution {
    public int solution(int[][] maps) {
        int n = maps.length;
        int m = maps[0].length;

        int[][] dist = new int[n][m];

        int[][] mv = {
            {0, 1},
            {1, 0},
            {0, -1},
            {-1, 0}
        };

        Queue<int[]> queue = new ArrayDeque<>();

        queue.offer(new int[]{0, 0});
        dist[0][0] = 1;

        while (!queue.isEmpty()) {
            int[] cur = queue.poll();

            int x = cur[0];
            int y = cur[1];

            if (x == n - 1 && y == m - 1) {
                return dist[x][y];
            }

            for (int i = 0; i < 4; i++) {
                int nx = x + mv[i][0];
                int ny = y + mv[i][1];

                if (nx < 0 || nx >= n ||
                    ny < 0 || ny >= m) {
                    continue;
                }

                if (maps[nx][ny] == 0) {
                    continue;
                }

                if (dist[nx][ny] != 0) {
                    continue;
                }

                dist[nx][ny] = dist[x][y] + 1;

                queue.offer(new int[]{nx, ny});
            }
        }

        return -1;
    }
}