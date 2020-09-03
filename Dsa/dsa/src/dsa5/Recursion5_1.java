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
public class Recursion5_1 {

    /**
     * @param args the command line arguments
     */
    
    // sunsequence pow(2,n)
    // substring n*(n+1)/2
    
    public static ArrayList <String> gss(String str)
    {
        if(str.length()==0)
        {
            ArrayList<String> bss = new ArrayList<> ();
            bss.add("");
            return bss;
        }
        char ch = str.charAt(0);
        String rss =str.substring(1);
        ArrayList<String> res = gss(rss);
        ArrayList<String> mss = new ArrayList<> ();
        
        for(String rstr : res)
        {
            mss.add(rstr);
            mss.add(ch+rstr);
            
        }
        
        return mss;
        
        
    }
    
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        ArrayList <String> list = gss(str);
        System.out.println(list);
        
    }
    
}
