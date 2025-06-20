import java.util.*;

class Solution {
    class Truck {
        int weight;
        int position;
        
        public Truck(int weight) {
            this.weight = weight;
            this.position = 1;
        }
        
        int moving() {
            return this.position++;
        }
    }
    
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        int answer = 0;
        int curWeight = 0;
        Queue<Truck> waitQ = new LinkedList<>();
        Queue<Truck> bridgeQ = new LinkedList<>();
        
        for (int t : truck_weights)
            waitQ.offer(new Truck(t));
        
        while (!waitQ.isEmpty() || !bridgeQ.isEmpty()) {
            answer++;
            if (bridgeQ.isEmpty()) {
                Truck t = waitQ.poll();
                bridgeQ.offer(t);
                curWeight += t.weight;
                continue;
            }
            
            for (Truck t : bridgeQ) {
                t.moving();
            }
            
            if (bridgeQ.peek().position > bridge_length) {
                Truck t = bridgeQ.poll();
                curWeight -= t.weight;
            }
            
            if (!waitQ.isEmpty() &&
                curWeight + waitQ.peek().weight <= weight) {
                Truck t = waitQ.poll();
                bridgeQ.offer(t);
                curWeight += t.weight;
            }
            
        }
        
        return answer;
    }
}