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
public class Arr2_3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int [][] arr = new int[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
        
        for(int j=0;j<m;j++)
        {
            if(j%2==0)
            {
                for(int i=0;i<n;i++)
                {
                    System.out.println(arr[i][j]);
                }
            }
            else
            {
              for(int i=n-1;i>=0;i--)
                {
                    System.out.println(arr[i][j]);
                }   
            }
        }
        
        
        
        
    }
    
}
