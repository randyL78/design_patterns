# frozen_string_literal: true
module com.randylayne.designpatterns.strategy.QuackBehavior
  # Implements different versions of the quack method
  class com.randylayne.designpatterns.strategy.Quack
    def self.quack
      puts 'com.randylayne.designpatterns.strategy.Quack quack!'
    end
  end
  class com.randylayne.designpatterns.strategy.Squeak
    def self.quack
      puts 'com.randylayne.designpatterns.strategy.Squeak!'
    end
  end
  class com.randylayne.designpatterns.strategy.MuteQuack
    def self.quack
      puts '<< Silence >>'
    end
  end
end