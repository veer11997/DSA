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
public class Recursion5_2 {

    /**
     * @param args the command line arguments
     */
    
    static String[] codes = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
     public static ArrayList <String> getkpc(String str)
    {
        if(str.length()==0)
        {
            ArrayList<String> bss = new ArrayList<> ();
            bss.add("");
            return bss;
        }
        char ch = str.charAt(0);
        String rss =str.substring(1);
        ArrayList<String> res = getkpc(rss);
        ArrayList<String> mss = new ArrayList<> ();
        
        String codeforch = codes[ch-'0'];
        for(int i=0;i<codeforch.length();i++)
        {
            char c =codeforch.charAt(i); 
        for(String rstr : res)
        {
           
            mss.add(c+rstr);
            
        }
        }
        
        return mss;
        
        
    }
    
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        ArrayList <String> list = getkpc(str);
        System.out.println(list);
        
    }
    
}
