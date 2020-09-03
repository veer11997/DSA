/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa3;

import java.util.Scanner;

// Euler Explaination

/**
 *
 * @author hp
 */
public class Recursion_7 {

    /**
     * @param args the command line arguments
     */
    
    public static void printzz(int n)
    {
        if(n==0)
        {
            return;
        }
        
        System.out.println("pre"+n); 
        printzz(n-1);// left call
        System.out.println("In"+n);
        printzz(n-1);// Right call
        System.out.println("post"+n);
        
        
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        printzz(n);
        
    }
    
}
