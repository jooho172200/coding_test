import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int[] arr = new int[n];

        for(int i=0; i<m; i++){
            int start = sc.nextInt();
            int end = sc.nextInt();
            int num = sc.nextInt();

            for(int j=start; j<=end; j++){
                arr[j-1] = num;
            }

            //System.out.println();
        }

        for(int i=0; i<n; i++){
            System.out.print(arr[i]+" ");
        }

    }
}