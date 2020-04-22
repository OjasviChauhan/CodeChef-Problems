import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int T=0;
		if(sc.hasNextInt())
		T=sc.nextInt();
		while(T-- > 0){
		    int N = sc.nextInt();
		    int M = sc.nextInt();
		    int F[] = new int[N];
		    int P[] = new int[N];
		    for(int i=0;i<N;i++)
		        F[i] = sc.nextInt();
		    for(int i=0;i<N;i++)
		        P[i] = sc.nextInt();
		        
		    ArrayList<Integer> sum = new ArrayList<Integer>(1);     
		    for(int j=1;j<=M;j++){
		        int k=0;
		        int arr[] = new int[50];
		        for(int i=0;i<N;i++){
		            if(F[i]==j) {arr[k]=i; k++;}
	            }
	            if(k!=0){
		        int z=0;
    		    for(int i=0;i<k;i++)
		            z += P[arr[i]];
		        sum.add(z);
	            }
	        }
	        Collections.sort(sum);
		    System.out.println(sum.get(0));
		}
	}
}
