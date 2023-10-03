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
//  Noun:  Game
//  action 1: start the game
game.start();
//  action 2: choose the player
game.chooseThePlayer();

//  action 3: run the map
game.run();

//  2)
//  Noun: baby
//  action 1: baby cry
baby.cry();
//  action 2: baby pop
baby.pop();
//  action 3: baby gets up
baby.getsUp();
//  3)
//  Noun: wizard
//  action 1: wizard fly
wizard.fly();
//  action 2: wizard use a potion
wizard.usePotion();
//  action 3: wizard do magic
wizard.doMagic();
//  4)
//  Noun: bomb
//  action 1: start bomb timer
bomb.timerStart();
//  action 2: the timer of the bomb sounds
bomb.soundTimer();

//  action 3: disconnected the bomb
bomb.disconnected();
//  5)
//  Noun: bee
//  action 1: bee fly
bee.fly();
//  action 2: bee take polen
bee.takePolen();
//  action 3: bee fight
bee.fight();
//  6)
//  Noun: door
//  action 1: the door open
door.open();
//  action 2: the door close
door.close();
//  action 3: the door lock
door.lock
//  7)
//  Noun: computer
//  action 1: computer run the ISO
computer.runIso();
//  action 2: computer ask password
computer.password();
//  action 3: computer off
computer.off();
//  8) 
//  Noun: phone
//  action 1: phone call
phone.call();
//  action 2: phone send a message
phone.sendMessage();
//  action 3: phone charge battery
phone.chargeBattery();
//  9)
//  Noun: lion
//  action 1: lion hunts
lion.hunt();
//  action 2: lion run
lion.run();
//  action 3: lion sleep
lion.sleep();
//  10)
//  Noun: human
//  action 1: human drink a beer
human.drinkBeer();
//  action 2: human eat burguer
human.eatBurguer();
//  action 3: human sleep siesta
human.sleepSiesta();


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
