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
public class Recursion_4 {

    /**
     * @param args the command line arguments
     */
    public static int fact(int n)
    {
        if(n==0)
          return 1;
        int fm1= fact(n-1);
        int fn= n*fm1;
        return fn;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int f = fact(n);
        System.out.println("Factorial is "+f);
    }
    
}
