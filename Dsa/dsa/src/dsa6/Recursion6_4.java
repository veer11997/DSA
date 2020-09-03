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
public class Recursion6_4 {

    /**
     * @param args the command line arguments
     */
    
    public static void printmazepath(int sr,int sc,int dr,int dc, String ans)
    {
        if(sr>dr || sc>dc)
        {
            
            return;
        }
        if(sc==dc && sr==dr)
        {
            System.out.println(ans);
            return;
        }
        
         printmazepath(sr,sc+1,dr,dc,ans+"h");
         printmazepath(sr+1,sc,dr,dc,ans+"v");
        
        
        
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();
            
        printmazepath(1,1,n,m,"");

    }
}