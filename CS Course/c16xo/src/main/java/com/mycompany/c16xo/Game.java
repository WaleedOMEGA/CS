/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.c16xo;

import java.util.Scanner;
/**
 *
 * @author Waleed OMEGA
 */
public class Game {
    private Player p1=new Player();
    private Player p2=new Player();
    private Board b=new Board();
    private int count=0;
    Scanner cin=new Scanner(System.in);
    public void readPlayerData(){
        System.out.println("Please Enter p1 name: ");
        String s=cin.next();
        p1.setName(s);
        System.out.println("Please Enter p2 name: ");
        s=cin.next();
        p2.setName(s);
         System.out.println("Please Enter p1 OP: ");
        String op=cin.next();
        p1.setOp(op.charAt(0));
        if(p1.getOp()=='x')
            p2.setOp('o');
        else
            p2.setOp('x');
                    
    }
    
    public void play(){
        readPlayerData();
        b.draw();
    }
}
