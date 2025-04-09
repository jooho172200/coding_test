import java.util.*;

class Solution {
    

private static int[] parent;

private static int find(int x){
    if(parent[x]==x) return x;
    
    return parent[x] = find(parent[x]);
}

private static void union(int x, int y){
    int root1 = find(x);
    int root2 = find(y);
    parent[root2] = root1;
}
    
    
    public int solution(int n, int[][] costs) {
        int answer = 0;
        int edge = 0;
        
        Arrays.sort(costs, (a,b) -> Integer.compare(a[2], b[2]));
        
        parent = new int[n];
        
        for(int i=0; i<n; i++){
            parent[i] = i;
        }
        
        for(int[] edges : costs){
            if(edge == n-1) break;
            
            if(find(edges[0])!=find(edges[1])){
                union(edges[0], edges[1]);
                
                answer += edges[2];
            
                edge++;
            }
            
            
        }
        
        
        
        return answer;
    }
}
