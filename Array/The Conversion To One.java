import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
	    
		Scanner sc=new Scanner(System.in);
		int testcases=sc.nextInt();
		
		while(testcases-->0)
		{
		    long n=sc.nextLong();
		    System.out.println(Geeks.minOperations(n));
		   
		}
	}
}

class Geeks
{
    public static long minOperations(long n)
    {
        if(n==1) 
        return 0; //since 1 is already 1
        if(n==2)
        return 1; //convert 2 to 1. 1 step
        if(n==3)
        return 2; //convert 3 to 2. Then 2 to 1. 2 steps
        long total=0; //save total steps
        if(n%2!=0) //if odd
        {
              total=1+Math.min(minOperations(n-1),minOperations(n+1)); 
              //convert n to n-1 or n+1 then minimum of those conversions
        }
        else
        total=1+minOperations(n/2); //convert n to n/2 then count operations required for n/2 to 1
        
        return total; //returning total at the end
    }
}
