import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        char[] arr = new char[1000];

        String s = sc.nextLine();
        
        arr = s.toCharArray();

        int n = sc.nextInt();

        System.out.println(arr[n-1]);
    }
}