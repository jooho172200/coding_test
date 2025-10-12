class Solution {
    public String solution(int a, int b) {
        String answer = "";
        
        String[] day = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
        int[] mon = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if(a == 1){
            for(int i=0; i<b; i++) answer = day[i%7];
        }else{
            int count = 0;
            
            for(int i=0; i< a-1; i++){
                count += mon[i];
            }
            
            for(int i=0; i<count + b; i++) answer = day[i%7];
        }
        
        return answer;
    }
}