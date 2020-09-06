/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa10;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class dsa1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int [] dp0= new int[n+1];
        int [] dp1= new int[n+1];
        
        dp0[1]=1;
        dp1[1]=1;
        
        for(int i=2;i<=n;i++)
        {
         dp1[i]=dp1[i-1]+dp0[i-1];
         dp0[i]=dp1[i-1];
        }
        System.out.println(dp0[n]+dp1[n]);
    }
    
}
