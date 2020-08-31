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
// ROtate by 90

public class Arr2_6 {

    /**
     * @param args the command line arguments
     */
    
    
    
     public static void rotateby90(int[][] arr){
      // transpose
      for(int i = 0; i < arr.length; i++){
         for(int j = 0; j < i; j++){
            int temp = arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i] = temp;
         }
      }
      // reverse columns, row by row
      for(int i = 0; i < arr.length; i++){
         int li = 0;
         int ri = arr[0].length - 1;
         while(li <= ri){
            int temp = arr[i][li];
            arr[i][li] = arr[i][ri];
            arr[i][ri] = temp;

            li++;
            ri--;
         }
      }
   }
   public static void display(int[][] arr){
      for(int i = 0; i < arr.length; i++){
          for(int j = 0; j < arr[0].length; j++){
              System.out.print(arr[i][j] + " ");
          }
          System.out.println();
      }
   }
    
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
                arr[i][j]=sc.nextInt();
            }
        }
        
        
      rotateby90(arr);
      display(arr);

                
    }
    
}
