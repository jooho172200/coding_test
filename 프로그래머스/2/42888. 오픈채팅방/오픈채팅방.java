import java.util.*;

class Solution {
    public String[] solution(String[] record) {
        ArrayList<String> result = new ArrayList<>();
        
        HashMap<String, String> map = new HashMap<>();
        
        int n = record.length;
        
        for(int i=0; i<n; i++){
            String[] cmd = record[i].split(" ");
            
            if(cmd[0].equals("Enter") || cmd[0].equals("Change")){
                map.put(cmd[1], cmd[2]);
            }
        }
        
        for(int i=0; i<n; i++){
            String[] cmd = record[i].split(" ");
            
            if(cmd[0].equals("Enter")){
                result.add(map.get(cmd[1])+"님이 들어왔습니다.");
            }else if(cmd[0].equals("Leave")){
                result.add(map.get(cmd[1])+"님이 나갔습니다.");
            }
        }
        
        
        String[] answer = result.toArray(new String[0]);
        
        return answer;
    }
}