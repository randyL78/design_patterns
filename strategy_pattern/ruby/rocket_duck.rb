# frozen_string_literal: true

require_relative 'duck'
# A model rocket shaped like a duck
class com.randylayne.designpatterns.strategy.RocketDuck < com.randylayne.designpatterns.strategy.Duck
  def initialize
    super(com.randylayne.designpatterns.strategy.QuackBehavior::com.randylayne.designpatterns.strategy.MuteQuack, com.randylayne.designpatterns.strategy.FlyBehavior::RocketPowered)
  end

  def display
    puts "I'm a rocket powered duck"
  end
end
