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
public class Recursion_6 {

    /**
     * @param args the command line arguments
     */
    // log(N)complexity
    
    public static int poweropti(int x,int n)
    {
        if(n==0){
            return 1;
        }
        int xnb2 = poweropti(x,n/2);
        int xn = xnb2*xnb2;
        if(n%2==1)
        {
            xn= xn*x;
        }
        
        return xn;
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        
        int x = sc.nextInt();
        int n = sc.nextInt();
        
        int res = poweropti(x,n);
        System.out.println(res);
        
        
    }
    
}
