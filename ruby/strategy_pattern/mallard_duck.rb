# frozen_string_literal: true

require_relative 'duck'
# A specific type of normal flying quacking duck
class MallardDuck < Duck
  def initialize
    super(QuackBehavior::Quack, FlyBehavior::FlyWithWings)
  end

  def display
    puts "I'm a mallard duck"
  end
end
