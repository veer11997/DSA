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

    StringBuilder sb = new StringBuilder();
    for(int i = 0; i < (1 << arr.length); i++){
       int dec = i;
       String str = "";

       for(int j = 0; j < arr.length; j++){
          int r = dec % 2;
          dec = dec / 2;

          if(r == 0){
            str = "-\t" + str;
          } else {
            str = arr[arr.length - 1 - j] + "\t" + str;
          }
       }

       sb.append(str + "\n");
    }

    System.out.println(sb);
    }
    
}
