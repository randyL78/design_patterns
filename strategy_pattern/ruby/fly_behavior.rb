# frozen_string_literal: true
module FlyBehavior

  # Implements different versions of the fly method
  class FlyWithWings
    def self.fly
      puts "I'm flying!"
    end
  end
  class RocketPowered
    def self.fly
      puts "I'm flying with a rocket!"
    end
  end

  class NoFly
    def self.fly
      puts "I can't fly."
    end
  end
end