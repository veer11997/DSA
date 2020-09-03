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
public class Arr10 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        
     int n = sc.nextInt();
    int[] arr = new int[n];
    for(int i = 0; i < n; i++){
       arr[i] = sc.nextInt();
    }
int limit = (int)Math.pow(2,arr.length);


for(int i=0;i<limit;i++)
{
    String str="";
    int temp =i;
    
    for(int j=arr.length-1;j>=0;j--)
    {
        int r = temp%2;
        temp = temp/2;
        if(r==0)
        {
             str = "-\t" + str;
        }
        else
        {
            str = arr[j] + "\t" + str;
        }
        
    }
     System.out.println(str);
}
    }
    
}
