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
public class Recursion4_6 {

    /**
     * @param args the command line arguments
     */
    public static int [] allIndices(int [] arr,int x,int ind,int fsf)
    {
    if(ind==arr.length)
    {
        return new int[fsf];
    }
    int [] iarr;
    if(arr[ind]==x)
    {
     iarr = allIndices(arr,x,ind+1,fsf+1);
     iarr[fsf]=ind;        
    }
    else
    {
        iarr = allIndices(arr,x,ind+1,fsf);
    }
       return iarr; 
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
         Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int x = sc.nextInt();
        int[] iarr = allIndices(arr, x, 0, 0);

        if(iarr.length == 0){
            System.out.println();
            return;
        }
        
        for(int i = 0; i < iarr.length; i++){
            System.out.println(iarr[i]);
        }
    }
    
}
