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
public class st2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        Stack<Character> st = new Stack<>();
        for(int i=0;i<str.length();i++)
        {
            char ch = str.charAt(i);
            if(ch==')')
            {
                if(st.peek()=='(')
                {
                 System.out.println(true);
                 return;
                }
                else
                {
                 while(st.peek()!='(')
                 {
                     
                     st.pop();
                 }
                 st.pop();
                }
            }
            else
            {
                st.push(ch);
            
        }
    }
        
     System.out.println(false);   
    }
    
}
