# frozen_string_literal: true
module QuackBehavior
  # Implements different versions of the quack method
  class Quack
    def self.quack
      puts 'Quack quack!'
    end
  end
  class Squeak
    def self.quack
      puts 'Squeak!'
    end
  end
  class MuteQuack
    def self.quack
      puts '<< Silence >>'
    end
  end
end