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
public class Recursion4_5 {

    /**
     * @param args the command line arguments
     */
    
    public static int  lastind(int []arr,int ind ,int x)
    {
        if(ind==arr.length)
        {
         return -1;   
        }
        int liism = lastind(arr,ind+1,x);
        if(liism==-1)
        {
         if(arr[ind]==x)
             return ind;
         else
             return -1;
        }
        else
        {
        return liism;
        }
        
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        
         Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        int [] arr = new int[n];
        
        for(int i=0;i<arr.length;i++)
        {
         arr[i] =sc.nextInt();
        }
        int x = sc.nextInt();
        int li= lastind(arr,0,x);
        System.out.println(li);
    }
    
}
