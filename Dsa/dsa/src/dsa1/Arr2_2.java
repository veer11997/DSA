/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa1;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Arr2_2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
             Scanner sc = new Scanner(System.in);
        
        int n1 = sc.nextInt();
        int m1 = sc.nextInt();
        
        int [][] arr1 = new int[n1][m1];
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            {
                arr1[i][j]=sc.nextInt();
            }
            
        }
        
         int n2 = sc.nextInt();
        int m2 = sc.nextInt();
        
        int [][] arr2 = new int[n2][m2];
        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<m2;j++)
            {
                arr2[i][j]=sc.nextInt();
            }
            
        }
        
        if(m1!=n2)
        {
         System.out.println("Invalid input");
         return;
        }
        
        int[][] prd = new int[n1][m2];
      for (int i = 0; i < n1; i++) {
         for (int j = 0; j < m2; j++) {
            int sum = 0;

            for (int k = 0; k < m1; k++) {
               sum += arr1[i][k] * arr2[k][j];
            }

            prd[i][j] = sum;
         }
      }

      for (int i = 0; i < n1; i++) {
         for (int j = 0; j < m2; j++) {
            System.out.print(prd[i][j] + " ");
         }
         System.out.println();
      }
    }
    
}
