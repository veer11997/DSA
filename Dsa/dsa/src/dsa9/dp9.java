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
public class dp9 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        int [] arr = new int[n];
        
        for(int i=0;i<arr.length;i++)
        {
         arr[i] = sc.nextInt();
            
        }
        
        int amt = sc.nextInt();
        
        int [] dp = new int[amt+1];
        
         dp[0] =1;
        
         for(int i=1 ; i<dp.length;i++)
         {
          for(int j=0;j<arr.length;j++)
          {
           if(arr[j]<=i)
           {
            dp[i]= dp[i]+dp[i-arr[j]];   
           }
              
          }
               
             
         }
         System.out.println(dp[amt]);
        
    }
    
}
