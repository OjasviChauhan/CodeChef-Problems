import java.util.*;

class Codechef{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0){
		    int n = sc.nextInt();
		    int k = 0;
		    int x = 0;
		    if(n%2 != 0){
    		    for(int i=0;i<n;i++){
    		    for(int j=0;j<n;j++)
    		        System.out.print(++k + " ");
    		    System.out.print("\n");    
    		    }
		    }
    		else{
    		    for(int i=0;i<n;i++){
    		        if(i%2 == 0){
    		            for(int j=0;j<n;j++)
    		                System.out.print(++k + " ");
    		            System.out.print("\n");
    		        }
    		        else{
    		            x = k + n;
    		            k += n;
    		            for(int j=0;j<n;j++)
    		                System.out.print(x-- + " ");
    		            System.out.print("\n");
    		        }
    		    }
    		}
    		
		}
	}
}