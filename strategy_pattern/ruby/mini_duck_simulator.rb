# frozen_string_literal: true

require_relative 'mallard_duck'
require_relative 'rocket_duck'
require_relative 'rubber_duck'
# Provides a runner for the other classes
class MiniDuckSimulator
  @ducks = [MallardDuck.new, RubberDuck.new, RocketDuck.new]

  @ducks.each do |duck|
    duck.display
    duck.fly
    duck.quack
    puts "\n"
  end
end
