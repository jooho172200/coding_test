import java.util.*;

class Solution {
    public int solution(int[][] board, int[] moves) {
        int answer = 0;
        int crane = -1;
        
        Stack<Integer> basket = new Stack<>();
        
        for(int i=0; i<moves.length; i++){
            for(int j=0; j<board.length; j++){
                crane = board[j][moves[i]-1];
                
                if(crane != 0){
                    board[j][moves[i]-1] = 0;
                    break;
                }
            }
            
            if(crane !=0 &&!basket.isEmpty() && crane==basket.peek()){
                basket.pop();
                answer+=2;
            }else if(crane !=0){
                basket.push(crane);
            }
        }
        
        
        return answer;
    }
}