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
public class Arr3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc =new Scanner(System.in);
          int n = sc.nextInt();
     int [] arr=new int[n];

     for(int i=0;i<n;i++)
          arr[i]=sc.nextInt();

     int maxi=arr[0];
     for(int i=1;i<n;i++)
     {
          if(arr[i]>maxi)
               maxi=arr[i];

     }

     for(int f=maxi;f>=1;f--)
     {
          for(int i=0;i<n;i++)
          {
               if(arr[i]>=f)
               {
                    System.out.print("*\t");
               }
               else
               {
                    System.out.print("\t");
               }
          }
           System.out.println();
     }
        
    }
    
}
