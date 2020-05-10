package com.randylayne.designpatterns.strategy;

import java.util.ArrayList;
import java.util.List;

public class MiniDuckSimulator {
   public static void main(String[] args) {
      List<Duck> ducks = new ArrayList<>();
      ducks.add(new MallardDuck());
      ducks.add(new RocketDuck());
      ducks.add(new RubberDuck());

      for (Duck duck : ducks) {
         duck.display();
         duck.fly();
         duck.quack();
         System.out.println("\n");
      }

      System.out.println("Poor rubber ducky can't fly. Let's change this behaviour by strapping on a rocket!");

      Duck rubber_ducky = ducks.get(2);
      rubber_ducky.setFlyBehavior(new FlyRocketPowered());
      rubber_ducky.display();
      rubber_ducky.fly();

   }
}
