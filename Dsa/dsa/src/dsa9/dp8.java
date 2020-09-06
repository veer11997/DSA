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
public class dp8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int [] coins = new int[n];
        
        for(int i=0;i<coins.length;i++)
        {
         coins[i] = sc.nextInt();
        }
        
        int amt = sc.nextInt();
        int []dp = new int[amt+1];
        
        
        dp[0]=1;
        
        for(int i=0;i<coins.length;i++)
        {
            for(int j=coins[i];j<dp.length;j++)
            {
                
                dp[j]=dp[j]+dp[j-coins[i]];
            }
            
            
        }
        
         System.out.println(dp[amt]);
    }
    
}
