import java.util.*;

class Main {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        int count;
        int sum = 0;
        
        Scanner sc = new Scanner(System.in);
        int min = sc.nextInt();
        int max = sc.nextInt();
    
        for(int i=min; i<=max; i++){
            count = 0;
            
            for(int j=1; j<=i; j++){
                if(i % j == 0) count++;
            }
            
            if(count == 2){
                arr.add(i);
                sum += i;
            }
        }
        
        if(sum != 0){
            System.out.println(sum);
        }
        
        try{
            System.out.println(arr.get(0));
        }catch(IndexOutOfBoundsException e){
            System.out.println(-1);
        }
        
    }
}