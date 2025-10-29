import java.util.*;

class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        
        int[] cards = new int[n];
        ArrayList<Integer> sum = new ArrayList<>();
        
        for(int i=0; i<n; i++){
            cards[i] = sc.nextInt();
        }
        
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    sum.add(cards[i] + cards[j] + cards[k]);
                }
            }
        }
        
        Collections.sort(sum);
        
        int max = -1;
        
        for(int i=0; i<sum.size(); i++){
            if(sum.get(i) > m) break;
            
            max = sum.get(i);
        }
        
        System.out.print(max);
    }
}
