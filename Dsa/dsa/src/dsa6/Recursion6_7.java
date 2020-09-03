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
public class Recursion6_7 {

    /**
     * @param args the command line arguments
     */
    
    public static void printencoding(String ques,String ans)
    {
        if(ques.length()==0)
        {
            System.out.println(ans);
            return;
        }
        else if(ques.length()==1)
        {
           char ch = ques.charAt(0);
         if(ch=='0'){
             return;
        }
        else
        {
            int chv = ch-'0';
            char code = (char)('a'+chv-1);
            System.out.println(ans+code);
        }
        }
        else
        {
            char ch = ques.charAt(0);
            String roq= ques.substring(1);
        if(ch=='0'){
             return;
        }
        else
        {
            int chv = ch-'0';
            char code = (char)('a'+chv-1);
            printencoding(roq,ans+code);
        }
        
        String ch12 = ques.substring(0,2);
        String roq12 = ques.substring(2);
        int chv12 = Integer.parseInt(ch12);
        
        
                if (chv12 <= 26) {
                     char code = (char)('a'+chv12-1);
                    printencoding(roq12, ans + code);
                }
        
        
        
        }
        
        
        
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        
        String str = sc.next();
        
        printencoding(str,"");
    }
    
}
