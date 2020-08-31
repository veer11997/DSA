/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa;

import java.util.Scanner;

/**
 *
 * @author hp
 */

//Reverse An Array
public class Arr6 {

    /**
     * @param args the command line arguments
     */
    
    public static void reverse(int [] arr)
    {
        int start=0;
        int end=arr.length-1;
        
        while(start<end)
        {
            
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            
            
         start++;
         end--;
        }
        
        
        
    }
    
    public static void display(int [] arr)
    {
        
        
        for(int x : arr)
            System.out.println(x);
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        int [] arr= new int[n];
        
        for(int i=0;i<arr.length;i++)
            arr[i]=sc.nextInt();
        
        reverse(arr);
        display(arr);
        
    }
    
}
