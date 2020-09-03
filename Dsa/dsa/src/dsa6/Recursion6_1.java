/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa6;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Recursion6_1 {

    /**
     * @param args the command line arguments
     */
    
    public static void printss(String ques,String ans)
    {
        if(ques.length()==0)
        {
            System.out.println(ans);
            return;
        }
        char ch = ques.charAt(0);
        String roq =ques.substring(1);
        printss(roq,ans+ch);
        printss(roq,ans+"");
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        
        String str = sc.nextLine();
        printss(str,"");
        
    }
    
}
