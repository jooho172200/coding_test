import java.util.*;

class Main {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int index = sc.nextInt();
        
        for(int i=1; i*i<=num; i++){
            if(num % i == 0){
                arr.add(i);
                
                if(i != num/i) arr.add(num/i);
            }    
        }
        
        Collections.sort(arr);
        
        try{
            System.out.print(arr.get(index-1));
        }catch(IndexOutOfBoundsException e){
            System.out.print(0);
        }
    }
}