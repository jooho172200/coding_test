import java.util.*;

class Solution
{
    public int solution(String s)
    {
        int answer = -1;
        
        Stack<Character> st = new Stack<>();
        
        for(char ch: s.toCharArray()){
           if(!st.isEmpty() && st.peek() == ch){
               st.pop();
           }else{
               st.push(ch);
           }
        }  
        
        answer = (st.isEmpty())? 1 : 0;
        
        return answer;
    }
}