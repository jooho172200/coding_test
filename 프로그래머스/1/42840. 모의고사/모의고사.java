import java.util.ArrayList;
import java.util.Arrays;

class Solution {
    public int[] solution(int[] answers) {
        int pattern[][] = {
            {1,2,3,4,5},
            {2,1,2,3,2,4,2,5},
            {3,3,1,1,2,2,4,4,5,5}
        };
        
        int score[] = new int[3];
        
        for(int i=0; i<answers.length; i++){
            for(int j=0; j< pattern.length; j++){
                if (answers[i] == pattern[j][i % pattern[j].length]){
                    score[j]++;
                }
            }
        }
        
        ArrayList<Integer> arr = new ArrayList<>();
        
        int maxValue = Arrays.stream(score).max().getAsInt();
        
        for(int i=0; i<3; i++){
            if(score[i] == maxValue) arr.add(i+1);
        }
        
        int[] answer = arr.stream().mapToInt(Integer::intValue).toArray();
        return answer;
    }
}