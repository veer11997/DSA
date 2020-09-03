/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa3;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Recursion_2 {

    /**
     * @param args the command line arguments
     */
    public static void printIncreasing(int n)
    {
        
        if(n==0)
            return;
        printIncreasing(n-1);
        System.out.println(n);
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        printIncreasing(n);
    }
    
}
