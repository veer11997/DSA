/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa4;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Recusion4_2 {

    /**
     * @param args the command line arguments
     */
     public static void displayArr(int[] arr, int idx) {
    if (idx == arr.length) {
      return;
    }

   
    displayArr(arr, idx + 1);
     System.out.println(arr[idx]);
  }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
         int [] arr = new int[n];
        for(int i=0;i<arr.length;i++)
        {
            arr[i] = sc.nextInt();
        }
        
        displayArr(arr,0);
       
    }
    
}
