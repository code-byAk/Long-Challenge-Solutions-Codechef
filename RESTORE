/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int N;
		Scanner sc=new Scanner (System.in);
		int T=sc.nextInt();
		
		int n=1500000;
		boolean prime[] = new boolean[n+1]; 
        for(int i=0;i<n;i++) 
            prime[i] = true; 
        for(int p = 2; p*p <=n; p++) 
        { 
            if(prime[p] == true) 
            { 
                for(int i = p*p; i <= n; i += p) 
                    prime[i] = false; 
            } 
        } 
        
        int co=0;
        for(int i=0;i<1500000;i++)
	    {
    		if(prime[i]==true)
    		{
    		    co++;
    		}
	    }
	    
	     int C[]=new int[co];
	     co=0;
	     for(int i=2;i<1500000;i++)
	    {
    		if(prime[i]==true)
    		{
    		    C[co]=i;
    		    co++;
    		}
	    }
	     /*for(int i=0;i<co;i++)
	    {
	    System.out.println(C[i]+" ");
	    }*/
    	
	    while(T-->0)
		{
		    N=sc.nextInt();
		    int B[]=new int[N];
		    for(int i=0;i<N;i++)
		    B[i]=sc.nextInt();
		    
		    int A[]=new int[N];
		    
		    for(int i=0;i<N;i++)
		    {
		        if(B[i]==i+1)
		        A[i]=C[i];
		        else
		        A[i]=C[B[i]-1];
		    }
		    
		    	for(int i=0;i<N;i++)
			    {
		    		System.out.print(A[i]+" ");
			    }
		    	System.out.println();
		}
	}
}
