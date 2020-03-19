import java.util.*;
class Codechef{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int T=0;
		if(sc.hasNext())
		T = sc.nextInt();
		while(T-- > 0){
		    int count=0,i,j,k=0;
		    int r = sc.nextInt();
		    int c = sc.nextInt();
		    System.out.println(50);
		    System.out.println(r+" "+c);
		    while(r<8 || c<8){
    		    for(i=1;i<8;i++){
    		        c++;
    		        if(c%2 == 0) r++;
    		        else r--;
    		        System.out.println(r+" "+c);
    		        count++;
    		    }
    		    if(r==8 && c==8) break;
    		    if(i==8){
    		       for(j=7;j>=1;j--){
    		           c--;
    		           if(c%2 != 0) r++;
    		           else r--;
    		           System.out.println(r+" "+c);
    		           count++;
    		       } 
    		    }
		    }
		    //System.out.println(count);
		}
	}
}
