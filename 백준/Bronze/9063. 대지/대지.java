import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int num = sc.nextInt();
        
        int[][] cord = new int[num][2];
        
        for(int i=0; i<num; i++){
            int x = sc.nextInt();
            int y = sc.nextInt();
            
            cord[i][0] = x;
            cord[i][1] = y;
        }
        
        if(num == 1){
            System.out.println(0);
            return;
        }
        
        int minX = 100000;
        int maxX = -100000;
        
        int minY = 100000;
        int maxY = -100000;
        
        for(int i=0; i<num; i++){
            if(cord[i][0] > maxX){
                maxX = cord[i][0];
            }
            
            if(cord[i][0] < minX){
                minX = cord[i][0];
            }
            
            if(cord[i][1] > maxY){
                maxY = cord[i][1];
            }
            
            if(cord[i][1] < minY){
                minY = cord[i][1];
            }
        }
        
        int w = maxX - minX;
        int h = maxY - minY;
        
        System.out.print(w*h);
    }
}