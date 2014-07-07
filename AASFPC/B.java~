import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

public class B
{
public static void main(String args[]) throws java.io.IOException
{
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    int num,ans,i,j,k,t,count,n;
    
    
    k=Integer.parseInt(br.readLine());
    
    while(k!=0) 	
    {
    	t=Integer.parseInt(br.readLine());
    	int []a = new int[t];
    	count=1; ans=1;
    	String str; 
    	str= br.readLine().toString();
    	
        String[] parts = str.split(" ");
        for(i=0; i<parts.length; i++)
           a[i]=Integer.parseInt(parts[i]);
       
       Arrays.sort(a);

        num=a[0]; 
        for(i=1;i<t;i++)
        {   
            if(a[i]==a[i-1]) { count = count+1;}
	    else { if(count>ans) { ans=count; num=a[i-1]; }count=1;}	
        }  
        if(count>ans) { ans=count; num=a[i-1]; }
        System.out.println(num);
        k--;
        
    }
}
}
