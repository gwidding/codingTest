import java.util.Arrays;


// h편이 h회 이상 인용
class Solution {
    long cnt (int[] arr, int h) {
        return Arrays.stream(arr)
                   .filter(n -> n >= h)
                   .count();
    }
    public int solution(int[] citations) {
        int h = 1;
        int len = citations.length;
        Arrays.sort(citations);
        
        int i = 0;
        while (i < len) {
            while (citations[i] >= h && cnt(citations, h) >= h) {
                System.out.println("i, 값, h " + i + citations[i] + h);
                h++;
            }
            i++;
        }
    
        return --h;
    }
}