/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa11;

import java.util.Stack;

/**
 *
 * @author hp
 */
public class st1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Stack<Integer> st = new Stack<>();
        st.push(10);
        st.push(20);
        st.push(30);
        System.out.println(st);
        System.out.println(st.peek()+" "+st.size());
        st.pop();
        System.out.println(st.peek()+" "+st.size());
        st.pop();
        System.out.println(st);
        
        
    }
    
}
