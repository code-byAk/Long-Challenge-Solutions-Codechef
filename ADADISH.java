/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		while(T-->0)
		{
		    int n=sc.nextInt();
		    int a[]=new int[n];
		    for(int i=0;i<n;i++)
		    {
		        a[i]=sc.nextInt();
		    }
		    Arrays.sort(a);
		    int sum1=0,sum2=a[n-1];
		    for(int i=n-2;i>=0;i--)
		    {
		        if(sum1<=sum2)
		        sum1=sum1+a[i];
		        else
		        sum2=sum2+a[i];
		    }
		    
		    System.out.println(Math.max(sum1,sum2));
		    
		}
	}
}
