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
public class Recursion_5 {

    /**
     * @param args the command line arguments
     */
    public static int powerfun(int n,int x)
    {
        if(x==0)
            return 1;
        int ps = powerfun(n,x-1);
        int p = n*ps;
        return p;
    }
           
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int res=powerfun(n,x);
        System.out.println(res);
    }
    
}
