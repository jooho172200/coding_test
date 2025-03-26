import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        
        int p1= s.nextInt();
        int p2= s.nextInt();
        
        System.out.println(p1+p2);
        System.out.println(p1-p2);
        System.out.println(p1*p2);
        System.out.println(p1/p2);
        System.out.println(p1%p2);

    }
}