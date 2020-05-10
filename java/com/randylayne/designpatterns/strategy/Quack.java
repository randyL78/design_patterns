package com.randylayne.designpatterns.strategy;

public class Quack implements QuackBehavior {
   public void quack() {
      System.out.println("Quack");
   }
}
