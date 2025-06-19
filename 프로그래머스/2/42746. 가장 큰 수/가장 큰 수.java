import java.util.List;
import java.util.ArrayList;

class Solution {
    public String solution(int[] numbers) {
        List<String> list = new ArrayList<>();
        
        for (int n : numbers) {
            list.add(Integer.toString(n));
        }
        list.sort((a,b) -> (b+a).compareTo(a+b));
        
        if ("0".equals(list.get(0)))
            return "0";
        StringBuilder sb = new StringBuilder();
        for (String s : list)
            sb.append(s);
        
        return sb.toString();
    }
}