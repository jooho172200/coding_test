import java.util.*;

class Solution {
    public String solution(int[] numbers) {
        String answer = "";
        
        String[] arr = Arrays.stream(numbers).mapToObj(String::valueOf).toArray(String[]::new);
        
        Arrays.sort(arr, (a,b) -> (b+a).compareTo(a+b));
        
        answer = String.join("", arr);
        
        if(answer.charAt(0) == '0') return "0";
        
        return answer;
    }
}