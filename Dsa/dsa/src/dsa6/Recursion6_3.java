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
public class Recursion6_3 {

    /**
     * @param args the command line arguments
     */
    public static void printstairpath(int n,String path)
    {
        if(n<0)
        {
            return;
        }
        if(n==0)
        {
            System.out.println(path);
            return ;
        }
        
        printstairpath(n-1,path+1);
        printstairpath(n-2,path+2);
        printstairpath(n-3,path+3);
        
        
    }
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        printstairpath(n,"");
    }
    
}
