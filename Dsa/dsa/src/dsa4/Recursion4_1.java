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
public class Recursion4_1 {

    /**
     * @param args the command line arguments
     */
    public static void display(int [] arr,int n)
    {
        if(n==-1)
            return;
        
       display(arr,n-1);
     System.out.println(arr[n]);
     
    }
    public static void displayArr(int[] arr, int idx) {
    if (idx == arr.length) {
      return;
    }

    System.out.println(arr[idx]);
    displayArr(arr, idx + 1);
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
        
        display(arr,arr.length-1);
        display(arr,0);
        
    }
    
}
