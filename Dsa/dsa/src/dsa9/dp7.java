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
public class dp7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int [] arr = new int[n];
        
        for(int i=0;i<arr.length;i++)
        arr[i] = sc.nextInt();
        
        int tar = sc.nextInt();
        
        boolean [][] dp = new boolean[n+1][tar+1];
        
     for(int i=0;i<dp.length;i++)
     {
         for(int j=0;j<dp[0].length;j++)
         {
             if(i==0 && j==0)
             {
                 dp[i][j] =true;
             }
             else if(i==0)
             {
                 dp[i][j]= false;
             }
             else if(j==0)
             {
                 dp[i][j] =true;
             }
             else
             {
                 if(dp[i-1][j]==true)
                 {
                     dp[i][j]=true;
                 }else
                 {
                  int val = arr[i-1];
                  if(j>=val && dp[i-1][j-val]==true)
                  {
                      dp[i][j] =true;
                 }
             }
                 
             
             
         }
     }
        
        
    }
     
      System.out.println(dp[dp.length - 1][tar]);
    }
    
}
