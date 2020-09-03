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
public class Recursion6_6 {

    /**
     * @param args the command line arguments
     */
    public static void printpermutaion(String ques,String ans)
    {
         if(ques.length() == 0){
            System.out.println(ans);
            return;
        }
        for(int i=0;i<ques.length();i++)
        {
         char ch = ques.charAt(i);
         String roq = ques.substring(0,i)+ques.substring(i+1);
           printpermutaion(roq,ans+ch); 
        }
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        
        String ques = sc.next();
        printpermutaion(ques,"");
        
    }
    
}
