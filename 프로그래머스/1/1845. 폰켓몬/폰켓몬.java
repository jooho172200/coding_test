import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;
        int n = nums.length;
        
        int k = n/2;        

        HashSet<Integer> set = new HashSet<>();
        
        for(int num : nums){
            set.add(num);
        }
        
        answer = (set.size() > k)? k : set.size();
        
        
        return answer;
    }
}