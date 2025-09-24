import java.io.*;

// The main method must be in a class named "Main".
class Main {
    public static void main(String[] args) throws IOException{
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int num = Integer.parseInt(br.readLine());
        
        int rc = 1;
        
        int x; // 분자
        int y; // 분모

        while(num>rc){
            num -= rc;
            rc++;
        }

        if(rc%2==1){
            x = rc - num+1;
            y = num;
        }else{
            y = rc - num+1;
            x = num;
        }

        
        bw.write(x + "/" + y);
        bw.flush();
        bw.close();
    }
}