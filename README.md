# Bird Simulator

You are to create a bird simulator that simulates, at a high level, the life of a bird over the course of a year. The
simulator starts with a bird migrating north to a breeding area in spring, finding a mate, building a nest, and
spending the summer raising offspring. In fall, the bird migrates south for the winter and spends the winter
fattening up before migrating north once again. The simulator allows for the specification of a geographic region
(e.g., North America) in the main(), and the simulator will use birds from that region. The region can be easily
changed, and a different bird species will be used for the next yearly simulation.

- Select two types of birds native to two different geographic areas. The simulator implementation uses two
different species of each bird type.

## Birds
### Area #1 - Sesame Street
* Feathered Bird - Big Bird
* Bald Bird - Rubber Ducky

### Area #2 - Muppet Studios
* Feathered Bird - Sam Eagle
* Bald Bird - Kermit the Bird

- The implementation uses a design pattern to make adding more regions and types of birds easy in a
future version of the simulator.

## Activities
Choose one or more activities that birds do during each season. Ignore activities that overlap between all
seasons (e.g. birds feed during all seasons). The activities must only occur in specific seasons.
- Each activity outputs a different string for each species.
### Spring

* Migrate North
* Build a Nest
* Find a mate

### Summer

* Raise Children
* Sing a bird song

### Fall

* Migrate South
* Carve a pumpkin

### Winter

* Fatten Up
* Stay warm

## Nest
Determine the set of materials all of your species use to create a nest. The set must include at least five
different materials.
- Each nest must be made from a different combination of materials.
### Materials
* Lily Pad
* Newspaper
* Feather
* Soap Dish
* American Whey 

## Design Patterns
- The implementation uses a design pattern to make adding more regions and types of birds easy in a
future version of the simulator.
### Pattern 1 - Abstract factory
* Client: main
* AbstractProduct: Bird
* AbstractProductA: SesameBird
* Product A1: BigBird
* Product A2: RubberDucky
* AbstractProductB: MuppetBird
* Product B1: SamEagle
* Product B2: Kermit
* AbstractFactory: SesameFactory
* ConcreteFactory1: SesameFactory
* ConcreteFactory2: MuppetFactory

- The implementation uses a design pattern to make adding activities to the seasons easy in a future
version of the simulator.
### Pattern 2 - Template Method
* AbstractClass : Bird
* ConcreteClass: derived classes (BigBird, RubberDucky, SamEagle, Kermit)
* Template Method(): SpringBehaviour()
* Template Method(): SummerBehaviour()
* Template Method(): FallBehaviour()
* Template Method(): WinterBehaviour()
* Primitive Behaviours:

- Use design patterns to simulate the construction of a nest in spring from some of the materials.
### Pattern 3 - Builder
* Builder - Bird
* ConcreteBuilder - derived classes (BigBird, RubberDucky, SamEagle, Kermit)

### Pattern 4 - Decorator
* Component: Nest
* ComcreteComponent: BuiltNest
* Decorator: Material
* ConcreteDecoratorA: LilyPad
* ConcreteDecoratorB: Feather
* ConcreteDecoratorC: Newspaper
* ConcreteDecoratorD: Soap Dish
* ConcreteDecoratorE: American Whey
* Common operation: getMaterials()


