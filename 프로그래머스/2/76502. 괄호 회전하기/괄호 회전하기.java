import java.util.*;

class Solution {
    public static boolean isValid(Deque<Character> deque){
        Stack<Character> st = new Stack<>();
        HashMap<Character, Character> map = new HashMap<>();
        map.put(')', '(');
        map.put('}', '{');
        map.put(']', '[');
        
        
        for(char ch: deque){
            if(map.containsValue(ch)) {
                st.push(ch);
            }
            else{
                if(st.isEmpty() || st.peek() != map.get(ch)) return false;
                
                st.pop();
            }
        }
        
        return st.isEmpty();
        
    }
    
    public int solution(String s) {
        int answer = 0;
        
        Deque<Character> dq = new ArrayDeque<>();
        
        for(char ch: s.toCharArray()) dq.addLast(ch);
        
        for(int i=0; i<s.length(); i++){
            if(isValid(dq)) answer++;
            dq.addLast(dq.pollFirst());
        }
        
        return answer;
    }
}