# frozen_string_literal: true

require_relative 'duck'
# A fun duck shaped bathtub toy
class com.randylayne.designpatterns.strategy.RubberDuck < com.randylayne.designpatterns.strategy.Duck
  def initialize
    super(com.randylayne.designpatterns.strategy.QuackBehavior::com.randylayne.designpatterns.strategy.Squeak, com.randylayne.designpatterns.strategy.FlyBehavior::NoFly)
  end

  def display
    puts "I'm a rubber ducky"
  end
end
