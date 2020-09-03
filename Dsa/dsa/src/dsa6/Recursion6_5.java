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
public class Recursion6_5 {

    /**
     * @param args the command line arguments
     */
    public static void printmazepath(int sr,int sc,int dr,int dc,String ans)
    {
        if(sr>dr && sc> dc)
        {
            return;
        }
        
        if(sr==dr && sc==dc)
        {
            System.out.println(ans);
            return ;
        }
        
        
     for(int ms=1;ms<=dc-sc;ms++)
     {
        printmazepath(sr,sc+ms,dr,dc,ans+"h"+ms); 
     }
     
      for(int ms=1;ms<=dr-sr;ms++)
     {
        printmazepath(sr+ms,sc,dr,dc,ans+"v"+ms); 
     }
      
       for(int ms=1;ms<=dc-sc && ms<=dr-sr;ms++)
     {
        printmazepath(sr+ms,sc+ms,dr,dc,ans+"d"+ms); 
     }
      
        
    }
            
    
    
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        
        printmazepath(1,1,n,m,"");
        
    }
    
}
