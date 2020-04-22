import java.util.*;
class Codechef{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int T=0;
		if(sc.hasNextInt())
		T=sc.nextInt();
		while(T-- > 0){
		    int N = sc.nextInt();
		    int Q = sc.nextInt();
		    int A[] = new int[N];
		    for(int i=0;i<N;i++)
		        A[i] = sc.nextInt();
		        
		    for(int i=0;i<Q;i++){
		        int e=0,o=0;
		        int P = sc.nextInt();
		        int B[] = new int[N];
		        for(int j=0;j<N;j++)
		            B[j] = (P ^ A[j]);
		        for(int j=0;j<N;j++){
		            int count = 0;
		            count = decToBinary(B[j]);
		            if(count%2 == 0) e++;
		            else o++;
		        }
		        System.out.println(e+" "+o);
		    }
		}
	}
	static int decToBinary(int n) { 
	    int count=0;
        while (n > 0){ 
            if(n%2 == 1) count++; 
            n = n / 2; 
        } 
        return count;
    }
}
