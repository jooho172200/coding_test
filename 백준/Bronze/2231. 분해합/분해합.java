import java.util.*;

class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        
        int len = String.valueOf(num).length();
        int start = Math.max(1, num - 9*len);
        
        for(int i=start; i<num; i++){
            int sum = 0;
            
            int result = i;
            
            sum += result;
                        
            while(result>0){
                sum += result%10;
                result/= 10;
            }
            
            if(sum == num){
                System.out.print(i);
                return;
            }
            
        }
        
        System.out.print(0);
    }
}
