import java.util.*;
import java.lang.*;
import java.io.*;

class Solution{
    public static void main (String[] args) throws java.lang.Exception{
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        while(T-- > 0){
            int N=sc.nextInt();
            int A[]=new int[N];
            for(int i=0;i<N;i++)
                A[i]=sc.nextInt();
            int i,j;
      loop: for(i=0;i<N;i++){
                if(A[i] == 1){
                for(j=i+1;j<=i+5 && j<N;j++){
                    if(A[j]==0) continue;
                    else {
                        System.out.println("NO");
                        break loop;
                        }
                    }
                    i=j-1; 
                }
                else continue;
            }
            if(i==N) System.out.println("YES");
        }
    }
}
