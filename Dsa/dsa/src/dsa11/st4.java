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
public class st4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int [] a = new int[n];
        for(int i=0;i<n;i++)
        {
         
            a[i] = sc.nextInt();
            
        }
        
        int [] nga = solve(a);
        
        for(int i=0;i<nga.length;i++)
        {
            
         System.out.println(nga[i]);   
        }
    }
    
    public static int [] solve(int [] arr)
    {
        
        int [] nga = new int[arr.length];
        
        Stack<Integer> st = new Stack<>();
        
        st.push(arr[arr.length-1]);
        nga[arr.length-1] = -1;
        
        for(int i= arr.length-2;i>=0;i--)
        {
         while(st.size()>0 && arr[i]>=st.peek())
         {
             
          st.pop();   
         }
         
         if(st.size()>0)
         {
          nga[i] = st.peek();   
         }
         else
         {
             nga[i] = -1;
         }
        st.push(arr[i]);
         
        }
        
        return nga;
    }

    
}
