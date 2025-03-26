import java.util.*;

class Solution {
    public int[] solution(int N, int[] stages) {
        int players[] = new int[N+2];
        double count = stages.length;
        
        for(int i=0; i<stages.length; i++){
            players[stages[i]]++;
        }
        
        HashMap<Integer, Double> fails = new HashMap<>();
        
        for(int i=1; i<=N; i++){
            if(players[i] == 0){
                fails.put(i,0.0);
            }else{
                fails.put(i, players[i]/count);
                count -= players[i];
            }
        }
        
        return fails.entrySet().stream().sorted((o1,o2)-> Double.compare(o2.getValue(), o1.getValue())).mapToInt(HashMap.Entry::getKey).toArray();
    }
}