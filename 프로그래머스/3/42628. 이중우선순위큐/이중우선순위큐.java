import java.util.*;


class Solution {
    public int[] solution(String[] operations) {
        int[] answer = {0, 0};
        ArrayList<Integer> list = new ArrayList<>();
        
        for (String str : operations) {
            String[] oper = str.split(" ");
            
            if (oper[0].equals("I"))
                list.add(Integer.parseInt(oper[1]));
            else if (oper[0].equals("D") && list.size() > 0) {
                Collections.sort(list);
                if (oper[1].equals("1")) {
                    list.remove(list.size()-1);
                }
                else if (oper[1].equals("-1")) {
                    list.remove(0);
                }
            }
        }
        if (list.size() > 0) {
            Collections.sort(list);
            answer[1] = list.get(0);
            answer[0] = list.get(list.size()-1);
        }
        return answer;
    }
}