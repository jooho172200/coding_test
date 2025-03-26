import java.util.Scanner;

public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        sc.nextLine(); 

        for(int i=0; i<num; i++){
            String str = sc.nextLine();
            char[] arr = str.toCharArray();

            System.out.printf("%c%c\n",arr[0],arr[arr.length-1]);
        }

    }
}