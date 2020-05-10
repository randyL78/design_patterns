# frozen_string_literal: true

require_relative 'duck'
# A model rocket shaped like a duck
class RocketDuck < Duck
  def initialize
    super(QuackBehavior::MuteQuack, FlyBehavior::RocketPowered)
  end

  def display
    puts "I'm a rocket powered duck"
  end
end
