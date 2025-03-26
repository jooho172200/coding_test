import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        Queue<Integer> q = new ArrayDeque<>();
        
        int n = progresses.length;
        int[] dLeft = new int[n];
        int release = 0;
        
        for(int i=0; i<n; i++){
            dLeft[i] = (int)Math.ceil((100.0-progresses[i])/speeds[i]);
        }
        
        int maxD = dLeft[0];
        
        for(int i=0; i<n; i++){
            if(dLeft[i]<=maxD){
                release++;
            }else{
                q.add(release);
                release = 1;
                maxD = dLeft[i];
            }
        }
        
        q.add(release);
        
        return q.stream().mapToInt(Integer::intValue).toArray();

        
    }
}