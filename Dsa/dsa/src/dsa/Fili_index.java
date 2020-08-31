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
public class Fili_index {

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
    int data = sc.nextInt();

    int left = 0;
    int right = arr.length - 1;
    int fi = -1;
    while(left <= right){
       int mid = (left + right) / 2;
       if(data > arr[mid]){
         left = mid + 1;
       } else if(data < arr[mid]){
         right = mid - 1;
       } else  {
          fi = mid;
          right = mid - 1;
       }
    }

    left = 0;
    right = arr.length - 1;
    int li = -1;
    while(left <= right){
       int mid = (left + right) / 2;
       if(data > arr[mid]){
         left = mid + 1;
       } else if(data < arr[mid]){
         right = mid - 1;
       } else  {
          li = mid;
          left = mid + 1;
       }
    }

    System.out.println(fi); 
    System.out.println(li);
    }
    
}
