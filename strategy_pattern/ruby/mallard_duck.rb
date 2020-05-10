# frozen_string_literal: true

require_relative 'duck'
# A specific type of normal flying quacking duck
class com.randylayne.designpatterns.strategy.MallardDuck < com.randylayne.designpatterns.strategy.Duck
  def initialize
    super(com.randylayne.designpatterns.strategy.QuackBehavior::com.randylayne.designpatterns.strategy.Quack, com.randylayne.designpatterns.strategy.FlyBehavior::com.randylayne.designpatterns.strategy.FlyWithWings)
  end

  def display
    puts "I'm a mallard duck"
  end
end
