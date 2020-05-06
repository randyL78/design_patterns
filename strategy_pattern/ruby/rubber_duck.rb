# frozen_string_literal: true

require_relative 'duck'
# A fun duck shaped bathtub toy
class RubberDuck < Duck
  def initialize
    super(QuackBehavior::Squeak, FlyBehavior::NoFly)
  end

  def display
    puts "I'm a rubber ducky"
  end
end
