import java.util.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {
    public static void main(String[] args) throws IOException{
        
        int count = 0;
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String str = br.readLine();
        
        int len = str.length();
        
        for(int i=0; i<len; i++){
            if(str.charAt(i) == 'c'){
                if(i+1<len && (str.charAt(i+1) == '-' || str.charAt(i+1) == '=')){
                    i++;
                }    
            }else if(str.charAt(i) == 's' || str.charAt(i) == 'z'){
                if(i+1<len && ((str.charAt(i+1) == '='))){
                    i++;
                }    
            }else if(str.charAt(i) == 'd'){
                if(i+1<len && (str.charAt(i+1) == '-')){
                    i++;
                }else if(i+2<len && (str.charAt(i+1) == 'z' && str.charAt(i+2) == '=')){
                    i+=2;
                }    
            }else if(str.charAt(i) == 'n' || str.charAt(i) == 'l'){
                if(i+1<len && (str.charAt(i+1) == 'j')){
                    i++;
                }    
            }
            
            count++;
        }

        bw.write(String.valueOf(count));
        bw.flush();
        bw.close();
    }
}