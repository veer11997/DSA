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
public class Arr4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc=new Scanner(System.in);
            int n1= sc.nextInt();
     int [] a1=new int[n1];
     for(int i=0;i<n1;i++)
          a1[i]=sc.nextInt();
     int n2=sc.nextInt();
     int [] a2=new int[n2];
     for(int i=0;i<n2;i++)
       a2[i]=sc.nextInt();
     int [] sum=new int[n1>n2?n1 : n2];
     int c=0;
     int i=a1.length-1;
     int j=a2.length-1;
     int k=sum.length-1;

     while(k>=0)
     {
          int d=c;
          if(i>=0)
          {
               d=d+a1[i];
          }
          if(j>=0)
          {
               d=d+a2[j];
          }
          c=d/10;
          d=d%10;
          sum[k]=d;
          i--;
          j--;
          k--;

     }
     if(c!=0)
          System.out.println(c);
     for(int x : sum)
          System.out.println(x);
    }
    
}
