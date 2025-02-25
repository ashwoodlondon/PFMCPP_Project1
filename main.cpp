#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        cat
//  action 1:    the cat meows
cat.meow();
//  action 2:    the cat destroys sofa
cat.destroySofa();
//  action 3:    the cat demands food
cat.demandFood();

//  2)
//  Noun:        battery
//  action 1:    the battery provides potential difference
battery.providePotentialDifference();
//  action 2:    the battery goes flat
battery.goFlat();
//  action 3:    the battery leaks
battery.leak();
//  3)
//  Noun:        flower
//  action 1:    the flower grows
flower.grow();
//  action 2:    the flower blossoms
flower.blossom();
//  action 3:    the flower produces nectar
flower.produceNectar();

//  4)
//  Noun:        engine
//  action 1:    the engine starts
engine.start();
//  action 2:    the engine consumes fuel
engine.consumeFuel();
//  action 3:    the engine stops
engine.stop();

//  5)
//  Noun:        balloon
//  action 1:    the balloon floats
balloon.float();
//  action 2:    the balloon bounces
balloon.bounce();
//  action 3:    the balloon pops
balloon.pop();

//  6)
//  Noun:        shark
//  action 1:    the shark swims
shark.swim();
//  action 2:    the shark eats fish
shark.eatFish();
//  action 3:    the shark menaces Amity Island
shark.menaceAmityIsland();

//  7)
//  Noun:        chicken
//  action 1:    the chicken eats grain
chicken.eatGrain();
//  action 2:    the chicken lays an egg
chicken.layEgg();
//  action 3:    the chicken clucks
chicken.cluck();

//  8)
//  Noun:        fan
//  action 1:    the fan moves air
fan.moveAir();
//  action 2:    the fan oscillates
fan.oscillates();
//  action 3:    the fan squeaks
fan.squeak();

//  9)
//  Noun:       washing machine 
//  action 1:   the washing machine begins the fast wash cycle 
washingMachine.beginFastWashCycle();
//  action 2:   the washine machine signals the end of the wash cycle 
washingMachine.signalEndOfWashCycle();
//  action 3:   the washing machine releases the door lock
washingMachine.releaseDoorLock();

//  10)
//  Noun:        builder
//  action 1:    the builder provides an estimate
builder.provideEstimate();
//  action 2:    the builder constructs a house
builder.constructHouse();
//  action 3:    the builder provides an invoice
builder.provideInvoice();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
