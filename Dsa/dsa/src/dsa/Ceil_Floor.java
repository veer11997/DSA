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
public class Ceil_Floor {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
         Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        int [] arr = new int[n];
        
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
        }
        int l=0;
        int h=arr.length-1;
        int data=sc.nextInt();
        int floor=0,ceil=0;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(data>arr[mid])
            {
                l=mid+1;
                floor=arr[mid];
            }
            else if(data<arr[mid])
            {
                h=mid-1;
                ceil=arr[mid];
            }
            else
            {
                floor=arr[mid];
                ceil=arr[mid];
            }
            
        }
        
        System.out.println(floor);//lower bound
        System.out.println(ceil);//Upper bound
    }
    
}
