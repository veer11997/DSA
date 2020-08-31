/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

// Rotate An Array


package dsa;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Arr7 {

    /**
     * @param args the command line arguments
     */
     public static void reverse(int [] arr,int s,int e)
    {
        int start=s;
        int end=e;
        
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
    
     public static void rotate(int [] a,int k)
    {
        k = k % a.length;
    if(k < 0){
      k += a.length;
    }

    reverse(a, 0, a.length - k - 1);
    reverse(a, a.length - k, a.length - 1);
    reverse(a, 0, a.length - 1);
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc =new Scanner(System.in);
        int n = sc.nextInt();
        int [] arr = new int [n];
        
        for(int i=0;i<arr.length;i++)
            arr[i]=sc.nextInt();
        
        int k = sc.nextInt();
        
        rotate(arr,k);
        display(arr);
        
    }
    
}
