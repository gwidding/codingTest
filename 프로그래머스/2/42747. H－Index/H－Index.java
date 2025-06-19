import java.util.Arrays;

class Solution {
    public int solution(int[] citations) {
        int h = 0;
        int len = citations.length;
        Arrays.sort(citations);
        
        for (int i = len - 1; i >= 0; i--) {
            int min = Math.min(citations[i], len - i);
            if (min > h) h = min;
        }
       
        return h;
    }
}