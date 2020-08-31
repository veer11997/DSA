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
public class Arr5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc =new Scanner(System.in);
        int n1 = sc.nextInt();
        int [] a1= new int[n1];
        for(int i=0;i<a1.length;i++)
            a1[i]=sc.nextInt();
        int n2;
        n2=sc.nextInt();
        int [] a2= new int[n2];
        for(int i=0;i<a2.length;i++)
            a2[i]=sc.nextInt();
        
         int [] sub=new int[n1>n2?n1 : n2];
         int i=a1.length-1;
         int j=a2.length-1;
         int k=sub.length-1;
         int c=0;
         while(k>=0)
          {
          int d;
          if(i>=0)
          {
               d=a1[i];
          }
          else
          {
              d=0;
          }
         if(a2[j] + c >= d){
         sub[k] = a2[j] + c - d;
         c = 0;
      } else {
        sub[k] = a2[j] + c + 10 - d;
        c = -1;
      }

          i--;
          j--;
          k--;

     }
      int idx = 0;
    while(idx < sub.length){
      if(sub[idx] != 0){
        break;
      } else {
        idx++;
      }
    }

    while(idx < sub.length){
      System.out.println(sub[idx]);
      idx++;
    }
            
    }
    
}
