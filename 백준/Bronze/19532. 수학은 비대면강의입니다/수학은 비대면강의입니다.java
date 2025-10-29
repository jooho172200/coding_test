import java.util.*;

class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int e = sc.nextInt();
        int f = sc.nextInt();
        
        int x = -999;
        int y = -999;
        
        for(int i=x; i<1000; i++){
            for(int j=y; j<1000; j++){
                if(a*i + b*j == c && d*i + e*j == f){
                    x = i;
                    y = j;
                }
            }
        }
        
        System.out.print(x+" "+y);
    }
}