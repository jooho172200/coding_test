import java.util.*;

class Solution {
    public int solution(int n) {
        int answer = 0;
        
        for(int i=2; i<=n; i++){
            
            if(i == 2){
                answer++;
                continue;
            }
            
            if(i%2==0) continue;
                    
            int count = 2;
            
            for(int j=3; j*j<=i; j+=2){
                if(i%j == 0){
                    count += (j*j == i)?1:2;
                    if(count > 2) break;
                }
            }
            
            if(count == 2) answer++;
        }    
        
        return answer;
    }
}
