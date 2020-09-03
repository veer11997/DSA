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
public class Recursion4_3 {

    /**
     * @param args the command line arguments
     */
    public static int maxarr(int [] arr,int ind)
    {
        if(ind==arr.length-1)
        {
            return arr[ind];
        }
        
        int misa = maxarr(arr,ind+1);
        if(misa > arr[ind])
            return misa;
        else
            return arr[ind];
        
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
        
       int res = maxarr(arr,0);
       System.out.println("maximum of array"+res);
        
    }
    
}
