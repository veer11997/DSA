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
public class Arr2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc= new Scanner(System.in);
          int n=sc.nextInt();
     int [] arr=new int[n];
     for(int i=0;i<n;i++){
          arr[i]=sc.nextInt();
     }
     int num;
     num=sc.nextInt();
     int ind=-1;

     for(int i=0;i<n;i++)
     {
          if(arr[i]==num)
          {
               ind=i;
               break;
          }
     }

     System.out.println(" Element present at index "+ind);
    }
    
}
