import java.util.*;

class Solution {
    public int[] solution(String[] enroll, String[] referral, String[] seller, int[] amount) {
        int N = enroll.length;
        
        int[] answer = new int[N];
        
        HashMap<String, String> tree = new HashMap<>();
        
        HashMap<String, Integer> money = new HashMap<>();
        
        // (판매원, 추천인)으로 매핑
        for(int i=0; i<N; i++){
            tree.put(enroll[i], referral[i]);
        }
        
        // enroll의 수익 0으로 초기화
        for(int i=0; i<N; i++){
            money.put(enroll[i], 0);
        }
        
            
        for(int i=0; i<seller.length; i++){
            int profit = amount[i] * 100;
            int incen = profit/10;
            String cur = seller[i];
            
            //center 도달까지
            while(profit > 0 && !cur.equals("-")){
                money.put(cur, money.getOrDefault(cur,0) + (profit - incen));
                cur = tree.get(cur);
                profit /= 10;
                incen /= 10;
            }
        }
        
        //result
        for(int i=0; i<N; i++){
            answer[i] = money.get(enroll[i]);
        }
        
        
        return answer;
    }
}