package com.randylayne.designpatterns.strategy;

public class RocketDuck extends Duck {
   public RocketDuck() {
      flyBehavior = new FlyRocketPowered();
      quackBehavior = new MuteQuack();
   }

   @Override
   public void display() {
      System.out.println("I'm a rocket powered duck");
   }
}
