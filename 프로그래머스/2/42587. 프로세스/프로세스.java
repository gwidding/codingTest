import java.util.*;

class Solution {
    public int solution(int[] priorities, int location) {
        int answer = 0 , l  = location;
        
        Queue<Integer> que = new LinkedList<>();
        for (int n : priorities) {
            que.add(n);
        }
        
        Arrays.sort(priorities);
        
        while(que.size() > 0) {
            int t = que.poll();
            if (t == priorities[priorities.length- 1 - answer]) {
                l--;
                answer++;
                if (l < 0)
                    break;
            }
            else {
                l--;
                que.add(t);
            }
            if (l < 0)
                l = que.size() - 1 ;
        }
        
        return answer;
    }
}