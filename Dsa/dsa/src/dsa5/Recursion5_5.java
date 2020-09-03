/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa5;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Recursion5_5 {

    /**
     * @param args the command line arguments
     */
    public static ArrayList<String>getmazepath(int sr,int sc,int dr,int dc)
    {
     if(sr==dr && sc==dc)
     {
      ArrayList<String> bss = new ArrayList<>();
      bss.add("");
      return bss;
     }
     
     ArrayList<String> paths = new ArrayList<>();
     // horizontal paths
     
     for(int ms =1;ms<=dc-sc;ms++)
     {
      
         ArrayList<String> hpaths = getmazepath(sr,sc+ms,dr,dc);
         for(String hpath : hpaths)
         {
          paths.add("h"+ms+hpath);   
         }
     }
     
       for(int ms =1;ms<=dr-sr;ms++)
     {
      
         ArrayList<String> vpaths = getmazepath(sr+ms,sc,dr,dc);
         for(String vpath : vpaths)
         {
          paths.add("v"+ms+vpath);   
         }
     }
     
      for(int ms =1;ms<=dc-sc && ms<=dr-sr;ms++)
     {
      
         ArrayList<String> dpaths = getmazepath(sr+ms,sc+ms,dr,dc);
         for(String dpath : dpaths)
         {
          paths.add("d"+ms+dpath);   
         }
     }
     
     return paths;
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        
        ArrayList<String> paths = getmazepath(1,1,n,m); 
        System.out.println(paths);
    }
    
}
