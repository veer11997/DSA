/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa;

/**
 *
 * @author hp
 */
public class Arr0 {

    /**
     * @param args the command line arguments
     */
    
    public static void  swap(int [] arr,int i,int j )
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        
        // SHallow copy passes  both array pointing same array of Heap
        
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
         int [] arr;        // in stack a var
        arr = new int[5]; // array declaration and assignment       // memory in heap
        arr[0]=1;
        arr[1]=2;
        arr[3]=3;
        arr[4]=4;
        arr[2]=5;
        
        for(int start=0;start<arr.length;start++)
            System.out.println(arr[start]);
        int [] brr=arr;// here a variable made in stack of brr and address stored in arr gets copy  no new memory allocated in Heap
        brr[4]=10; // here a shallo copy made of array not made a Deap copy of array  beacuse deap copy made only by new keywoard
       swap(arr,0,1);
        for(int start=0;start<arr.length;start++)
            System.out.println(arr[start]);
        
        
        
        // Array implication
        //1=> performance same for first element as well as last element for any index same time to execution
        //2=> Assignment
        //3=> Function
        
        
        
    }
    
}
