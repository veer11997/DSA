/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

// print All subarray power(2,n)

package dsa;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Arr9 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int [] arr = new int[n];
        
        for(int i=0;i<arr.length;i++)
            arr[i]=sc.nextInt();
        
        for(int i=0;i<arr.length;i++)
        {
            for(int j=i;j<arr.length;j++)
            {
                
                for(int k=i;k<=j;k++)
                {
                    System.out.print(arr[k]+"\t");
                }
                System.out.println();
            }
            
        }
        
    }
    
}
