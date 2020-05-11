# Design Patterns

Following the examples from _Head First Design Patterns_. Implementing each pattern in Ruby, C++, and Java. Eventually, would like to follow up with JavaScript, Python, and PHP as well. That way people can see a direct comparison of the same concept and design implemented in multiple languages.

## Strategy pattern

### Overview

The Strategy Pattern or Policy Pattern is a way of implementing a family of algorithms that can be selected at runtime and are interchangeable. It is a way of encapsulating behavior from the clients that use it. Use this pattern when a behavior has multiple implementations, and you want to choose which one an object uses at runtime.

### Problem it solves

Imagine the following situation: there is a lot of monstrous conditionals or switch statements to select an algorithm for execution. Sometimes you have to add new algorithms to this already complex structure. Yet another problem is that the code begins to be duplicated in different contexts. How can one make it easier to add new algorithms and write a more concise code? (Taken from an excerpt on JetBrains academy)

### Pros and Cons

#### Pros

* Choose method behavior at runtime
* Swap out different behavior on already created objects
* Isolate algorithm implementation from the code that uses it
* Follows the open-closed principle in [SOLID](https://scotch.io/bar-talk/s-o-l-i-d-the-first-five-principles-of-object-oriented-design)
* Helps you replace inheritance(is-a) with composition (has-a).

#### Cons

* Can over complicate the code if there are only a few, rarely changing, algorithms
* The code that uses the algorithms must be aware of all the different strategies
* Slightly antiquated with the advent of anonymous functions


## Additional resources

[Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Brain-Friendly/dp/0596007124)

[Refactoring Guru](https://refactoring.guru/design-patterns/)

[Source Making](https://sourcemaking.com/design_patterns/)

[JetBrains Academy (Hyper Skill)](https://hyperskill.org/knowledge-map)