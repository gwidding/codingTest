import java.util.*;


class Solution {
    public int[] solution(String[] operations) {
        int[] answer = {0, 0};

        PriorityQueue<Integer> minQ = new PriorityQueue<>();
        PriorityQueue<Integer> maxQ = new PriorityQueue<>(Collections.reverseOrder());
        
        for (String str : operations) {
            String[] oper = str.split(" ");
            
            if (oper[0].equals("I")) {
                minQ.add(Integer.parseInt(oper[1]));
                maxQ.add(Integer.parseInt(oper[1]));
            }
            else if (oper[0].equals("D") && minQ.size() > 0) {
                if (oper[1].equals("1"))
                    minQ.remove(maxQ.poll());
                else if (oper[1].equals("-1"))
                    maxQ.remove(minQ.poll());
            }
        }
        
        if (minQ.size() > 0) {
            answer[0] = maxQ.poll();
            answer[1] = minQ.poll();
        }
        return answer;
    }
}