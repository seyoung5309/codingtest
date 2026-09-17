class Solution {
    static int answer = 0;

    public int solution(int k, int[][] dungeons) {
        boolean[] visited = new boolean[dungeons.length];

        func(dungeons, k, 0, visited);

        return answer;
    }

    public static void func(
            int[][] dungeons,
            int p,
            int count,
            boolean[] visited
    ) {
        if (count > answer) {
            answer = count;
        }

        for (int i = 0; i < dungeons.length; i++) {

            if (visited[i]) {
                continue;
            }

            if (p < dungeons[i][0]) {
                continue;
            }

            visited[i] = true;

            func(
                dungeons,
                p - dungeons[i][1],
                count + 1,
                visited
            );

            visited[i] = false;
        }
    }
}