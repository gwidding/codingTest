import java.util.*;

class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        int answer = 0, totalWeight = 0;
        Queue<Integer> bridge = new LinkedList<>();
        
        for (int i = 0; i < bridge_length; i++) {
            bridge.offer(0);
        }
        
        int j = 0;
        while (j < truck_weights.length) {
            answer++;
            
            totalWeight -= bridge.poll();
            
            if (totalWeight + truck_weights[j] <= weight) {
                bridge.offer(truck_weights[j]);
                totalWeight += truck_weights[j];
                j++;
            }
            else {
                bridge.offer(0);
            }
            
        }
        
        return answer + bridge_length;
    }
}