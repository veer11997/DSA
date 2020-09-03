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
public class Recursion6_2 {

    /**
     * @param args the command line arguments
     */
    
    static String[] codes = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    public static void printkpc(String ques,String ans)
    {
     if(ques.length()==0)
     {
         System.out.println(ans);
         return;
         
     }
     
     char ch = ques.charAt(0);
     String roq = ques.substring(1);
     
     String charofcodes = codes[ch-'0'];
     
     for(int i=0;i<charofcodes.length();i++)
     {
         char cho = charofcodes.charAt(i);
         printkpc(roq,ans+cho);
     }
     
     
     
        
        
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc =new Scanner(System.in);
        
        String str = sc.next();
        printkpc(str,"");
    }
    
}
