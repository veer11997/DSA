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
public class Recursion5_3 {

    /**
     * @param args the command line arguments
     */
    
    public static ArrayList<String>getstairpath(int n)
    {
        if(n==0)
        {
         ArrayList<String> bss = new ArrayList<>();
         bss.add("");
         return bss;
        }
        else if(n<0)
        {
           ArrayList<String> bss = new ArrayList<>();
         return bss;
        }
        
        ArrayList<String> path1 = getstairpath(n-1);
        ArrayList<String> path2 = getstairpath(n-2);
        ArrayList<String> path3 = getstairpath(n-3);
        
        ArrayList<String> mypath = new ArrayList<>();
        
        for(String rstr : path1)
        {
         mypath.add(1+rstr);   
        }
        
         for(String rstr : path2)
        {
         mypath.add(2+rstr);   
        }
         
          for(String rstr : path3)
        {
         mypath.add(3+rstr);   
        }
          return mypath;
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc =new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<String> paths = getstairpath(n);
        System.out.println(paths);
    }
    
}
