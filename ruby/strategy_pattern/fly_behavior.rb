# frozen_string_literal: true

module FlyBehavior

  # Use for real ducks and others that fly with their wings
  class FlyWithWings
    def self.fly
      puts "I'm flying!"
    end
  end
  # Strap a rocket on a duck, or more likely a model duck with a rocket.
  class RocketPowered
    def self.fly
      puts "I'm flying with a rocket!"
    end
  end
  # Ducks that can't fly
  class NoFly
    def self.fly
      puts "I can't fly."
    end
  end
end
