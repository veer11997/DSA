/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa10;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class dsa2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
      
        
        int oz=1;
        int oo=1;
        
        for(int i=2;i<=n;i++)
        {
        int nz = oo;
        int no = oz+oo;
        
        oo=no;
        oz=nz;
        }
        int total = oo+oz;
        System.out.println(total*total);
        
    }
    
}
