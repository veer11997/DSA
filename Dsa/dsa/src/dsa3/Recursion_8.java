/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


// tower of Hanoi
package dsa3;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class Recursion_8 {

    /**
     * @param args the command line arguments
     */
    public static void toweroh(int n,char a ,char b, char c)
    {
        
        if(n==0)
        {
            return;
        }
        toweroh(n-1,a,c,b);
        System.out.println(n+"a to b");
        toweroh(n-1,c,b,a);
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char a='a';
        char b='b';
        char c='c';
        toweroh(n,a,b,c);
        
        
    }
    
}
