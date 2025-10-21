import java.util.*;

class Main {
    public static void main(String[] args) {
        int[] lines = new int[3];
        
        Scanner sc = new Scanner(System.in);
        
        while(true){
            for(int i=0; i<3; i++){
                lines[i] = sc.nextInt();
            }
            
            if(lines[0] == 0 && lines[1] == 0 && lines[2] == 0) break;
            
            Arrays.sort(lines);
            
            if(lines[0] + lines[1] <= lines[2]){
                System.out.println("Invalid");
            }else if(lines[0] == lines[1] && lines[1] == lines[2] && lines[0] == lines[2]){
                System.out.println("Equilateral");
            }else if(lines[0] == lines[1] || lines[1] == lines[2] || lines[0] == lines[2]){
                System.out.println("Isosceles");
            }else{
                System.out.println("Scalene");
            }
        }
    }
    
}