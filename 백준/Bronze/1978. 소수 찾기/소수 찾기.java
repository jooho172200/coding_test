import java.util.*;

class Main {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        int answer = 0;
        int count;
        
        Scanner sc = new Scanner(System.in);
        int index = sc.nextInt();
        
        for(int i=0; i<index; i++){
            int num = sc.nextInt();
            arr.add(num);
        }
        
        for(int i=0; i<arr.size(); i++){
            count = 0;
            int number = arr.get(i);
            
            for(int j=1; j<=number; j++){
                if(number % j == 0) count++;
            }
            
            if(count == 2) answer++;
        }
        
        System.out.println(answer);
    }
}