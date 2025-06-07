class Solution {
    boolean solution(String s) {
        int ready = 0;
        
        for (char c : s.toCharArray()) {
            if (c == '(')
                ready++;
            else if (c == ')')
                ready--;
            
            if (ready < 0)
                return false;
        }
        if (ready != 0)
            return false;
        return true;
    }
}