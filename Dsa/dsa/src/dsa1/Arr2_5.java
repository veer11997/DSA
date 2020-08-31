/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa1;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Arr2_5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
         int[][] arr = new int[n][m];

      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
            arr[i][j] = sc.nextInt();
         }
      }

      int i = 0;
      int j = 0;
      int dir = 0;
      while (true) {
         dir = (dir + arr[i][j]) % 4;
         if (dir == 0) {
            j++;
         } else if (dir == 1) {
            i++;
         } else if (dir == 2) {
            j--;
         } else if (dir == 3) {
            i--;
         }

         if (i < 0) {
            i++;
            break;
         } else if (j < 0) {
            j++;
            break;
         } else if (i == n) {
            i--;
            break;
         } else if (j == m) {
            j--;
            break;
         }
      }

      System.out.println(i);
      System.out.println(j);
    }
    
}
