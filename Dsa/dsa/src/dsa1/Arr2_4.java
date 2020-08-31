/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


// Spiral Display
package dsa1;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Arr2_4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic 
        Scanner sc = new Scanner(System.in);
        int n  = sc.nextInt();
        int m = sc.nextInt();
        int [][] arr = new int[n][m];
        for(int i=0;i<n;i++)
        {
         for(int j=0;j<m;j++)
         {
             arr[i][j]=sc.nextInt();
         }
        }
        
        int co=0;
        int tnm= n*m;
        int minr=0;
        int minc=0;
        int maxr=n-1;
        int maxc=m-1;
        
        while(co<tnm)
        {
          for(int i = minr;i<=maxr && co < tnm;i++)
          {
              System.out.println(arr[i][minc]);
              co++;
              
          }
          minc++;
          
          for(int j = minc;j<=maxc && co < tnm;j++)
          {
              System.out.println(arr[maxr][j]);
              co++;
              
          }
          maxr--;
          
          
          for(int i = maxr;i>=minr && co < tnm;i--)
          {
              System.out.println(arr[i][maxc]);
              co++;
              
          }
          maxc--;
          
          for(int j = maxc;j>=minc && co < tnm;j--)
          {
              System.out.println(arr[minr][j]);
              co++;
              
          }
          minr++;
          
            
            
        }
        
        
        
    }
    
}
