import java.util.*;

class Solution {
    public int solution(int[] scoville, int K) {
        
        int answer = 0;
        
        //우선 순위 큐로 힙 구현
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        
        
        for(int i=0; i<scoville.length; i++){
            pq.add(scoville[i]);
        }
        
        //최소 두 개의 음식이 힙에 남아있고 최소 스코빌 지수가 K 이하인 경우
        while(pq.size() > 1 && pq.peek() < K){
            int sco;
            sco = pq.poll();
            
            sco += (pq.poll()*2);
            pq.add(sco);
              
            answer++;
            
        }
             
        //모든 음식의 스코빌 지수를 K 이상으로 만들 수 없는 경우
        if(!pq.isEmpty() && pq.peek() < K) answer = -1;
        
        return answer;
    }
}
