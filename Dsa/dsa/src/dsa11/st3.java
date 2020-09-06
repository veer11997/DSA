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
public class st3 {

    /**
     * @param args the command line arguments
     */
    public static boolean handelclosing(Stack<Character> st,char choc)
    {
        
         if(st.size()==0)
          {
          // System.out.println(false);
           return false ;
          }
          else if(st.peek()!=choc)
          {
         //  System.out.println(false);
           return  false;
          }
          else
          {
              st.pop();
              return true;
          }
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        Stack<Character> st = new Stack<>();
        
        
        for(int i=0;i<str.length();i++)
        {
            
         char ch =str.charAt(i);
         if(ch== '(' || ch=='{' || ch=='[')
         {
             st.push(ch);
         }
         else if(ch==')')
         {
         boolean val= handelclosing(st,'(');
         if(val==false)
         {
             System.out.println(false);
             return;
         }
         }
         else if(ch=='}')
         {
          boolean val= handelclosing(st,'{'); 
          if(val==false)
         {
             System.out.println(false);
             return;
         }
         }
         else if(ch==']')
         {
             
          boolean val=handelclosing(st,'['); 
         if(val==false)
         {
             System.out.println(false);
             return;
         }
         }
         else
         {
             
          // ignore   
         }    
        }
        
        if(st.size()==0)
        {
            System.out.println(true);
        }
        else
        {
               System.out.println(false);   
        }
        
    }
    
}
