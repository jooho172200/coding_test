import java.util.*;

class Main {
    public static void main(String[] args) {
        int wMin, hMin;
        
        Scanner sc = new Scanner(System.in);
        
        int x = sc.nextInt();
        int y = sc.nextInt();
        int w = sc.nextInt();
        int h = sc.nextInt();
        
        wMin = (w/2 < x ? w-x : x);
        hMin = (h/2 < y ? h-y : y);
        
        int min = Math.min(wMin, hMin);
        
        System.out.print(min);
    }
}