import java.util.*;

class Solution {
    public int solution(String[][] board, int h, int w) {
        int answer = 0;
        
        HashMap<String, Integer> map = new HashMap<>();
        
        map.put(board[h][w], map.getOrDefault(board[h][w], 0));
        
        
        
        if(h-1 >= 0){
            map.put(board[h-1][w], map.getOrDefault(board[h-1][w], 0)+1);
        }
        
        if(h+1 < board.length){
            map.put(board[h+1][w], map.getOrDefault(board[h+1][w], 0)+1);
        }
        
        if(w-1 >= 0){
            map.put(board[h][w-1], map.getOrDefault(board[h][w-1], 0)+1);
        }
        
        if(w+1 < board[0].length){
            map.put(board[h][w+1], map.getOrDefault(board[h][w+1], 0)+1);
        }
        
        answer = map.get(board[h][w]);
        
        return answer;
    }
}