/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa9;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class dp1 {

    /**
     * @param args the command line arguments
     */
    
    public static int  fib(int n,int [] qb)
    {
        if(n==0 || n==1)
        {
            return n;
        }
        if(qb[n]!=0)
        {
            return qb[n];
        }
        int fibm1 = fib(n-1,qb);
        int fibm2 = fib(n-2,qb);
        
        int fibn = fibm1 + fibm2;
        qb[n] = fibn;
        return fibn;
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc =new Scanner(System.in);
        
        int n = sc.nextInt();
        int []qb = new int[n+1];
        int fibn = fib(n,qb);
        
        System.out.println(fibn);
    }
    
}
