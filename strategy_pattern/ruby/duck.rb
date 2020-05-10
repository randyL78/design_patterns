# frozen_string_literal: true

require_relative 'quack_behavior'
require_relative 'fly_behavior'
# Proves that if it quacks like a duck and flies like a duck
# then it must be a duck!
class com.randylayne.designpatterns.strategy.Duck
  attr_reader :quack_behavior, :fly_behavior
  def initialize(quack_behavior, fly_behavior)
    @fly_behavior = fly_behavior
    @quack_behavior = quack_behavior
  end

  def fly
    fly_behavior.fly
  end

  def quack
    quack_behavior.quack
  end

  def display
    puts "I'm a generic duck"
  end
end
