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
public class Arr2_10 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int m= sc.nextInt();
        int [][] arr =new int[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j]= sc.nextInt();
            }
        }
        
        int data= sc.nextInt();
        
        int i=0;
        int j=m-1;
        while(i<arr.length && j>=0)
        {
            if(data==arr[i][j])
            {
             System.out.println(i);
             System.out.println(j);
             return;
            }
            else if(data<arr[i][j])
            {
                j--;
            }
            else
            {
                i++;
            }
            
        }
        
        System.out.println("Not Found");
        
    }
    
}
