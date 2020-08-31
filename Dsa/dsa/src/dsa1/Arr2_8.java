/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
// Diagonal Treaversal
package dsa1;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Arr2_8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [][] arr = new int[n][n];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
              {
                arr[i][j]=sc.nextInt();
              }
        }
        
        
        for(int r=0;r<n;r++)
        {
            for(int i=0, j=r;j<n;i++,j++)
            {
                System.out.println(arr[i][j]);
            }
        }
        
    }
    
}
