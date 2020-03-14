import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
        int t=0;
        long n=0,k=0,sum=0;
        if(sc.hasNextInt())
            t = sc.nextInt();
        for(int i=0;i<t;i++){
            if(sc.hasNextLong())
                n = sc.nextLong();
            if(sc.hasNextLong())
                k = sc.nextLong();
            long A[] = new long[(int)n];
            for(long j=0;j<n;j++)
                if(sc.hasNextLong())
                    A[(int)j] = sc.nextLong();  
            for(long j=0;j<n;j++)
                sum += A[(int)j];
            long z = sum % k;
            System.out.println(z);
            sum = 0;
	    }
    }
}
