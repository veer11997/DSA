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
public class st6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
           Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] a = new int[n];
        for(int i=0;i<n;i++)
            a[i] = sc.nextInt();
        
        int [] rb = new int[a.length];
        Stack<Integer> st = new Stack<>();
        st.push(a.length-1);
        rb[a.length-1]= a.length;
        
        for(int i=a.length-2;i>=0;i--)
        {
           while(st.size()>0 && a[i]<a[st.peek()]) 
           {
               st.pop();
               
           }
           if(st.size()==0)
           {
               rb[i] = a.length;
           }
           else
           {
               rb[i] = st.peek();
           }
            st.push(i);
        }
        
         int [] lb = new int[a.length];
         st = new Stack<>();
        st.push(0);
        rb[0]= -1;
        
        for(int i=1;i<a.length;i++)
        {
           while(st.size()>0 && a[i]<a[st.peek()]) 
           {
               st.pop();
               
           }
           if(st.size()==0)
           {
               lb[i] = -1;
           }
           else
           {
               lb[i] = st.peek();
           }
            st.push(i);
        }
        
     int res=0;
     
      for (int i = 0; i < a.length; i++) {
      int width = rb[i] - lb[i] - 1;
      int area = width * a[i];
      if (area > res) {
        res = area;
      }
    }

    System.out.println(res);
    }
    
}
