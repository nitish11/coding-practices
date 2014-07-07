import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

public class a
{
public static void main(String args[])
{
    Scanner scan = new Scanner(System.in);
    int num,ans,i,j,k,t,count,n,tm;
    
    k=scan.nextInt();
    
    while(k!=0) 	
    {
    	t=scan.nextInt();  count=ans=1;
    	int []a = new int[t];
        for(i=0;i<t;i++)
          a[i]=scan.nextInt();  
        Arrays.sort(a);
        
        //for (int number : a)  System.out.println("Number = " + number);
        
        num=a[0]; 
        for(i=1;i<t;i++)
        {   
            if(a[i]==a[i-1]) count=count+1;
	    else { if(count>ans) { ans=count; num=a[i-1]; }count=1;}	
        }  
        if(count>ans) { ans=count; num=a[i-1]; }count=1;
        System.out.println(num);
        k=k-1;
        
    }
}
}
