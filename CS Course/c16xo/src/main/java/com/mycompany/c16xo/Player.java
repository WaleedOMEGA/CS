/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.c16xo;

/**
 *
 * @author Professional
 */
public class Player {
    private String name;
    private char op;

    public Player(String name, char op) {
        this.name = name;
        this.op = op;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setOp(char op) {
        this.op = op;
    }

    public String getName() {
        return name;
    }

    public char getOp() {
        return op;
    }
    
}
