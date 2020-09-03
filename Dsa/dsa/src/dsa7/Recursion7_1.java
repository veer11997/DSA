/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa7;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Recursion7_1 {

    /**
     * @param args the command line arguments
     */
    public static void foodfill(int [][] maze,int row,int col,String psf,boolean [][] visited)
    {
        if(row<0 || col<0 || row==maze.length || col==maze[0].length || maze[row][col]==1 || visited[row][col]==true)
        {
            return;
        }
        
        if(row==maze.length-1 && col==maze[0].length-1)
        {
         System.out.println(psf);
         return;
        }
        
        visited[row][col] = true;
      foodfill(maze, row - 1, col, psf + "t", visited);
      foodfill(maze, row, col - 1, psf + "l", visited);
      foodfill(maze, row + 1, col, psf + "d", visited);
      foodfill(maze, row, col + 1, psf + "r", visited);
      visited[row][col] = false;
        
        
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        
        int [][] arr = new int[n][m];
        for(int i=0;i<arr.length;i++)
        {
         for(int j=0;j<arr[0].length;j++)
         {
             arr[i][j]=sc.nextInt();
        }
    }
        boolean[][] visited = new boolean[n][m];
     foodfill(arr,0,0,"",visited);   
        
    }
    
}
