package com.randylayne.designpatterns.strategy;

public class RubberDuck extends Duck {
   public RubberDuck() {
      quackBehavior = new Squeak();
      flyBehavior = new FlyNoWay();
   }

   @Override
   public void display() {
      System.out.println("I'm a rubber ducky");
   }
}

