import java.util.*;

class Solution {
    public Stack<Integer> solution(int[] progresses, int[] speeds) {  
        int len = speeds.length;
        int[] arr = new int[len];
        
        for (int i = 0; i < len; i++) {
            arr[i] = (int) Math.ceil((100 - progresses[i]) / (double)speeds[i]);
        }

        Stack<Integer> stack = new Stack<>();
        int tmp = -1;
        
        for (int i = 0; i < len; i++) {
            if (tmp < arr[i]) {
                tmp = arr[i];
                stack.push(1);
            }
            else {
                int top = stack.peek();
                stack.pop();
                stack.push(top+1);
            }
        }
        
        return stack;
    }
}