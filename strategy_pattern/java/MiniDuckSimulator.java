import java.util.ArrayList;
import java.util.List;

public class MiniDuckSimulator {
   public static void main(String[] args) {
      List<Duck> ducks = new ArrayList<>();
      ducks.add(new MallardDuck());
      ducks.add(new RubberDuck());
      ducks.add(new RocketDuck());

      for (Duck duck : ducks) {
         duck.display();
         duck.fly();
         duck.quack();
         System.out.println("\n");
      }
   }
}
