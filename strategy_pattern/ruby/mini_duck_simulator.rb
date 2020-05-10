# frozen_string_literal: true

require_relative 'mallard_duck'
require_relative 'rocket_duck'
require_relative 'rubber_duck'
# Provides a runner for the other classes
class com.randylayne.designpatterns.strategy.MiniDuckSimulator
  @ducks = [com.randylayne.designpatterns.strategy.MallardDuck.new, com.randylayne.designpatterns.strategy.RubberDuck.new, com.randylayne.designpatterns.strategy.RocketDuck.new]

  @ducks.each do |duck|
    duck.display
    duck.fly
    duck.quack
    puts "\n"
  end
end
