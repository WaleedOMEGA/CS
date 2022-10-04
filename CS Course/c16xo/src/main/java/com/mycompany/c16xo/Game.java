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
        while(!b.isFull()){
            Player currentPlayer = p1;
            if(count % 2 == 1) currentPlayer=p2;
            while(true){
            int pos;
            System.out.println("Please enter empty pos from 1 to 9: ");
            pos=cin.nextInt();
            if(b.replaceChar(pos, currentPlayer)){
            break;
            }
            }
            b.draw();
            if(b.isWin(currentPlayer)){
            System.out.println("Winner is : "+currentPlayer.getName());
            }
            
            count++;
            
        }
        if(b.isFull()){
            System.out.println("Game is Draw");
        }
    }
}
