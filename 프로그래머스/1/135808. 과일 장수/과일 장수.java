import java.util.*;

class Solution {
    public int solution(int k, int m, int[] score) {
        int answer = 0;
        int[] box = new int[m];
        
        PriorityQueue<Integer> pq = new PriorityQueue<>(Comparator.reverseOrder());
        
        for(int n : score){
            pq.add(n);
        }
        
        while(!pq.isEmpty()){
            
            if(pq.size() < m) break;
            
            for(int i=0; i<m; i++){
                box[i] = pq.poll();
            }            
            
            Arrays.sort(box);
            
            answer += box[0] * m;
        }
        
        return answer;
    }
}
