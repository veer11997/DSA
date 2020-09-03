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
public class Recursion5_4 {

    /**
     * @param args the command line arguments
     */
    public static ArrayList<String> getmazepath(int sr,int sc,int dr,int dc)
    {
        if(sr==dr && sc==dc)
        {
            ArrayList<String> bss = new ArrayList<>();
            bss.add("");
            return bss;
        }
        
        ArrayList<String> hpaths = new ArrayList<>();
        ArrayList<String> vpaths  = new ArrayList<>();
        
        if(sc<dc)
        {
         hpaths = getmazepath(sr,sc+1,dr,dc);   
        }
        if(sr<dr)
        {
         vpaths = getmazepath(sr+1,sc,dr,dc);   
        }
        
        ArrayList mpaths = new ArrayList<>();
        
        for( String hpath : hpaths)
        {
         mpaths.add("h"+hpath);   
        }
        
         for( String vpath : vpaths)
        {
         mpaths.add("v"+vpath);   
        }
         return mpaths;
        
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
