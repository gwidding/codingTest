import java.util.HashMap;
import java.util.ArrayList;
import java.util.List;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";

        HashMap<String, List<Integer>> map = new HashMap<>();
        for (int i = 0; i < completion.length; i++) {
            map.computeIfAbsent(completion[i], k -> new ArrayList<>()).add(i);
        }
        
        for (int i = 0; i < participant.length; i++) {
            if (map.containsKey(participant[i])) {
                List<Integer> list = map.get(participant[i]);
                if (list.isEmpty())
                    return participant[i];
                list.remove(list.size() - 1);
            }
            else {
                answer = participant[i];
                break;
            }
        }
        return answer;
    }
}