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
public class dp2 {

    /**
     * @param args the command line arguments
     */
     public static int countpathtabulation(int n)
     {
         int [] dp = new int[n+1];
         
         dp[0]=1;
         for(int i=1;i<=n;i++)
         {
          if(i==1)
          {
              dp[i] = dp[i-1];
          }
          else if(i==2)
          {
              dp[i] = dp[i-1]+dp[i-2];
          }else
          {
              dp[i] =dp[i-1]+dp[i-2]+dp[i-3];
          }
           
         }
         return dp[n];
         
     }
             
    public static int countpath(int n,int [] qb)
    {
     if(n==0)
     {
      return 1;   
     }
     else if(n<0)
     {
         
      return 0;   
     }
     
     if(qb[n]>0)
     {
         return qb[n];
     }
     
     int nm1 = countpath(n-1,qb);
     int nm2 = countpath(n-2,qb);
     int nm3 = countpath(n-3,qb);
     int cp = nm1+nm2+nm3;
     
     qb[n] = cp;
     return cp;
        
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] qb = new int[n+1];
        int cp = countpath(n,qb);
        int cpt = countpathtabulation(n);
                
        System.out.println(cpt);
        
        
    }
    
}
