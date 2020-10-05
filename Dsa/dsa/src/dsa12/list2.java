/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsa12;

import java.util.Scanner;

/**
 *
 * @author hp
 */
public class list2 {

    /**
     * @param args the command line arguments
     */
    public static class Node {
    int data;
    Node next;
        }
    
  public static class LinkedList {
    Node head;
    Node tail;
    int size;

    void addLast(int val) {
      Node temp = new Node();
      temp.data = val;
      temp.next = null;

      if (size == 0) {
        head = tail = temp;
      } else {
        tail.next = temp;
        tail = temp;
      }

      size++;
    }
  }
    
     
  public static void testList(LinkedList list) {
    for (Node temp = list.head; temp != null; temp = temp.next) {
      System.out.println(temp.data);
    }
    
   System.out.println(list.size);
  }
     
    public static void main(String[] args) {
        // TODO code application logic here
     Scanner sc = new Scanner(System.in);
    LinkedList list = new LinkedList();
    
    list.addLast(10);
    list.addLast(20);
        list.addLast(30);
        list.addLast(40);
        list.addLast(50);
        list.addLast(60);
    
    
    testList(list);
        
    }
    
}
