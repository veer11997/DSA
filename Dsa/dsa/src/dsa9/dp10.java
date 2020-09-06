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
public class dp10 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int [] vals = new int[n];
        int [] wats = new int[n];
        
        for(int i=0;i<vals.length;i++)
            vals[i] = sc.nextInt();
        
        for(int j=0;j<wats.length;j++)
            wats[j] = sc.nextInt();
        
        int cap = sc.nextInt();
        
        int [][] dp = new int[n+1][cap+1];
        
        for(int i=1 ;i<dp.length;i++)
        {
            
            for(int j=1;j<dp[0].length;j++)
            {
                    if(j>=wats[i-1])
                    {
                        int rcap = j-wats[i-1];
                        if(dp[i-1][rcap]+vals[i-1] > dp[i-1][j])
                        {
                         dp[i][j] = dp[i-1][rcap]+vals[i-1];   
                        }
                        else
                        {
                            dp[i][j] =dp[i-1][j];
                        }
                            
                            
                    }
                    else
                    {
                     dp[i][j] =dp[i-1][j];   
                    }
                
            }
            
        }
        
        System.out.println(dp[n][cap]);  
    }
    
}
