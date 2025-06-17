import java.util.Arrays;

class Solution {
    public boolean solution(String[] phone_book) {
        Arrays.sort(phone_book);
        String prev = "";
        for (String p : phone_book) {
            if (!prev.isEmpty() && p.indexOf(prev) == 0)
                return false;
            prev = p;
        }
        return true;
    }
}