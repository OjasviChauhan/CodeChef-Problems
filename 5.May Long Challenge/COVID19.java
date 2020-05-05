import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        int t = 0;
        if(sc.hasNextInt())
        t=sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int x[]=new int[n];
            for(int i=0;i<n;i++)
                x[i]=sc.nextInt();

            ArrayList<Integer> a = new ArrayList<Integer>(1);
            int i=0,count=1;
              for(i=0;i<x.length-1;i++){
                  if(x[i+1] - x[i] <= 2) count++;
                  else{
                      a.add(count);
                      count = 1;
                  }
              }
              if(i == x.length-1) a.add(count);
            Collections.sort(a);
            System.out.println(a.get(0)+" "+a.get(a.size()-1)); 
        }
	}
}
