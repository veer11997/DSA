/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa11;

import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author hp
 */
public class st5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here\\
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int [] a = new int[n];
        
        for(int i=0;i<n;i++)
            a[i] = sc.nextInt();
        
        int [] nge = solve(a);
                
    }
    
    public static int [] solve(int [] arr)
    {
     
        int [] span = new int[arr.length];
        Stack<Integer> st = new Stack<>();
        
        st.push(0);
        span[0]=1;
        
        for(int i=1;i<arr.length;i++)
        {
         while(st.size()>0 && arr[i] > arr[st.peek()])
         {
             st.pop();
            
        }
         
         if(st.size()==0)
         {
          span[i] = i+1;   
         }
         else
         {
          span[i] = i-st.peek();   
         }
            
        st.push(i);
        
    }
        
        return span;
    
}
 
    
}
    

