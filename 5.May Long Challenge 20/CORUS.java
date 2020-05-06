/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        int t = 0;
        if(sc.hasNextInt())
        t=sc.nextInt();        
        while(t-- > 0){
            int n = sc.nextInt();  //no of people
            int q = sc.nextInt();  // no of queries
            String s = sc.next();  // string 

            while(q-- > 0){
                int c = sc.nextInt();  //no of isolation centers
			          int count=0;
			          int cr[] = new int[26];
			    
			          for(int j=0;j<n;j++){
			            int x=(int)s.charAt(j)-97;
			    	      cr[x]++;
			    	      if(cr[x] > c) count++;
			          }
			       System.out.println(count);
		        }
        }
	}
}
