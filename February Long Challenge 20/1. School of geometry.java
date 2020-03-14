import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef{
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);
        int t=0;
        long n=0;
        if(sc.hasNextInt())
             t = sc.nextInt();
        
        for(int i=0;i<t;i++){
            long count=0;
            if(sc.hasNextLong())
                n = sc.nextLong();
            long A[] = new long[(int)n];
            long B[] = new long[(int)n];
            for(long j=0;j<n;j++)
                if(sc.hasNextLong())
                    A[(int)j] = sc.nextLong();
            for(long j=0;j<n;j++)    
                if(sc.hasNextLong())
                    B[(int)j] = sc.nextLong();
               
            Arrays.sort(A);
            Arrays.sort(B);
            
            for(long j=n-1;j>=0;j--){
                if(A[(int)j] > B[(int)j]) count += B[(int)j];
                else            count += A[(int)j];
            }
            System.out.println(count);
            count = 0;
        }
    }
}
