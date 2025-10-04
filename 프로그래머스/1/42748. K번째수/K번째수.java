import java.util.*;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        
        int[] answer = new int[commands.length];
        
        for(int i=0; i<commands.length; i++){
            
            ArrayList<Integer> arr = new ArrayList<>();
            
            int start = commands[i][0]-1;
            int end = commands[i][1]-1;
            
            for(int j=0; j<= end-start; j++){
                arr.add(array[start+j]);
            }
            
            arr.sort(Comparator.naturalOrder());
            
            int index = commands[i][2];
            
            answer[i] = arr.get(index-1);
        }
        
        return answer;
    }
}