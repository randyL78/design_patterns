# frozen_string_literal: true

require_relative 'mallard_duck'
require_relative 'rocket_duck'
require_relative 'rubber_duck'
require_relative 'fly_behavior'

# Provides a runner for the other classes
class MiniDuckSimulator
  @ducks = [MallardDuck.new, RocketDuck.new, RubberDuck.new]

  @ducks.each do |duck|
    duck.display
    duck.fly
    duck.quack
    puts "\n"
  end

  puts "Poor rubber ducky can't fly. Let's change this behaviour by strapping on a rocket!"

  rubber_ducky = @ducks[2]
  rubber_ducky.fly_behavior = FlyBehavior::RocketPowered
  rubber_ducky.display
  rubber_ducky.fly
end
