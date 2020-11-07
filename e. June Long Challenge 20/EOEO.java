import java.util.*;

class Codechef{
	public static void main (String[] args) throws java.lang.Exception{
	    Scanner sc = new Scanner(System.in);
	    long t = sc.nextLong();
	    while(t-- > 0){
	        long ts = sc.nextLong();
	        if(ts%2 == 0){
	            while(ts%2 == 0) 
	                ts /= 2;
	            System.out.println(ts/2);
	        }
	        else{
	            System.out.println(ts/2);
	        }
	    }
	}
}