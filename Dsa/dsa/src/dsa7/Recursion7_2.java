/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa7;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Recursion7_2 {

    /**
     * @param args the command line arguments
     */
    public static void printtargetsubset(int [] arr ,int ind,String set,int sos,int tar)
    {
        if(ind==arr.length)
        {
         if(sos==tar)
         {
             System.out.println(set+" .");
            
         }
          return;
        }
        
        printtargetsubset(arr,ind+1,set+arr[ind],sos+arr[ind],tar);
        printtargetsubset(arr,ind+1,set,sos,tar);
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] arr = new int[n];
        
        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();
        
        int tar = sc.nextInt();
        printtargetsubset(arr,0,"",0,tar);
    }
    
}
