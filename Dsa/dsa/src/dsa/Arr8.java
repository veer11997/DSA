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
public class Arr8 {

    /**
     * @param args the command line arguments
     */
    
     public static int [] inverse(int [] arr)
    {
        int [] inv =new int[arr.length];
        for(int i=0;i<arr.length;i++)
        {
            int temp=arr[i];
            inv[temp]=i;
        }
        
       return inv;
    }
    
    
    
     public static void display(int [] arr)
    {
        
        
        for(int x : arr)
            System.out.println(x);
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] arr = new int[n];
        
        for(int i=0;i<arr.length;i++)
            arr[i]=sc.nextInt();
        
        int [] inv = inverse(arr);
        display(inv);
        
        
    }
    
}
