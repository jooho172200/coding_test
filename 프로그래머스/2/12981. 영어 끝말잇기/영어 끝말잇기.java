import java.util.*;

class Solution {
    public int[] solution(int n, String[] words) {
        int[] answer = new int[2];
        
        HashMap<String, Integer> map = new HashMap<>();
        
        char pre = words[0].charAt(0);
        
        for(int i=0; i<words.length; i++){
            
            map.put(words[i], map.getOrDefault(words[i],0) + 1);
            
            if(map.get(words[i]) > 1 || words[i].charAt(0) != pre){
                int k = (i%n)+1;
                int m = (i/n)+1;
                
                answer[0] = k;
                answer[1] = m;
                
                return answer;
            }
            
            pre = words[i].charAt(words[i].length() - 1);
            
        }
        
        return new int[]{0,0};
    }
}