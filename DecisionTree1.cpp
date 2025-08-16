//=============================================================================
// Name: samantha reap  
// E-mail: shreap@usc.edu
// Description: This program takes you on an adventure from atop a mountain where you
// must make decisions that lead to various outcomes, including encounters with yetis, hidden treasures
// and escaping various environments. The goal is to escape to safety, but you can't be too lucky
// all the time. 
//
// ------------------------ Test case Inputs ----------------------------------

// Test 1: Choosing to ski down the icy slope
// Input: 1
// Output:
//   You chose to ski down the slope!
//   Suddenly, you hit a patch of ice and start sliding into absolute oblivion!
//   Do you want to try to slow down by carving (1) or grab onto a tree (2)?

// Test 1.a: Ski down and carve
// Input: 1, 1
// Output:
//   You carve gracefully and come to a stop. You make it down safely!

// Test 1.b: Ski down and grab onto a tree
// Input: 1, 2
// Output:
//   You grab onto a tree, but it snaps! You tumble into a soft snowbank.
//   Now, do you want to try to get back on your skis (1) or walk behind the snow bank (2)?

// Test 1.ba: Get back on skis after grabbing a tree
// Input: 1, 2, 1
// Output:
//   You manage to get back on your skis and continue down the mountain safely!

// Test 1.bb: Walk behind the snowbank after grabbing a tree
// Input: 1, 2, 2
// Output:
//   You find a daunting cave that seems cozy despite its darkness.
//   Do you want to go in? yes (1), no (2)?

// Test 1.bba: Enter the cave after walking behind the snowbank
// Input: 1, 2, 2, 1
// Output:
//   Cautiously walking in, you feel the air thin and water trickling.
//   Suddenly, you find a magical gem always shining a light in a singular direction.
//   You decide to follow the light and manage to find a system that leads you safely out!

// Test 1.bbb: Do not enter the cave after walking behind the snowbank
// Input: 1, 2, 2, 2
// Output:
//   Unfortunately, being extremely indecisive, you took too long...
//   SO LONG...
//   THAT you got hit by an avalanche out of nowhere...

//// Test 2: Enter the abandoned cabin
// Input: 2
// Output:
//   You enter the abandoned cabin and find it filled with old gear.
//   Suddenly, the door slams shut! Do you want to look for a way out (1) or try to open the door (2)?

// Test 2.a: Look for a way out
// Input: 2, 1
// Output:
//   You find a hidden trapdoor to a slide all the way down! You escape safely!

// Test 2.b: Try to open the door
// Input: 2, 2
// Output:
//   You push hard, but it's stuck. Do you want to use a nearby chair to break the door (1) or look for a window (2)?

// Test 2.ba: Break the door down
// Input: 2, 2, 1
// Output:
//   You break the door down and escape! Adrenaline kept you going the entire way down! WOW!

// Test 2.bb: Look for a window
// Input: 2, 2, 2
// Output:
//   You find a window that opens and slip out into a... different dimension?!. TBC.

// Test 2.bc: Invalid choice when trying to open the door
// Input: 2, 2, 3
// Output:
//   Invalid choice. You're stuck in the cabin FOREVER!

// Test 3: Enter the ice cave
// Input: 3
// Output:
//   You enter the ice cave and are hypnotized by sparkling walls.
//   But suddenly, you hear growling! It's A YETI!
//   Do you want to fight it (1) or try to sneak past it (2)?

// Test 3.a: Choose to fight the yeti
// Input: 3, 1
// Output:
//   You bravely confront the yeti! Do you want to throw a snowball (1) or try to talk to it (2)?

// Test 3.aa: Throw a snowball
// Input: 3, 1, 1
// Output:
//   The yeti is distracted by the snowball and you BLAST OUT ASAP!

// Test 3.ab: Try to talk to the yeti
// Input: 3, 1, 2
// Output:
//   Surprisingly, the yeti is friendly and guides you to safety!!

// Test 3.ac: Invalid choice while fighting the yeti
// Input: 3, 1, 3
// Output:
//   Invalid choice. The yeti catches you!

// Test 3.b: Sneak past the yeti
// Input: 3, 2
// Output:
//   You sneak past quietly, but trip on a loose rock!
//   The yeti looks at you unamused and lets you go!
//   What a nice guy!

// Test 3.c: Invalid choice while sneaking past the yeti
// Input: 3, 3
// Output:
//   Invalid choice. The yeti catches you!

//Test 4: begin the game
//Input: any number except for 1, 2, and 3 at the beginning
//Output: invalid choice, you can't start ):
//=============================================================================

// ------------ Add #includes and other statements here ----------
#include <iostream> 
#include <string>

using namespace std;

// ------------ Add your main() function below ----------

main() {
int choice1, choice2, choice3; 

//introduction
cout << "Welcome to my Mountain Adventure!" << endl;
cout << "----------------------------------------" << endl;
cout << "It begins in a helicopter, but suddenly you crash into the peak of a mountain!" << endl;
cout << "...choose your path wisely to make it down safe..." << endl;
cout << endl;

//first decision
cout << "After waking up, you see three options:" << endl; 
cout << "     (1) Ski down the icy slope." << endl;
cout << "     (2) Walk awhile to an abandoned cabin." << endl;
cout << "     (3) enter an ice cave." << endl;
cout << endl; 
cout << "What will you do?" << endl;

//int first choice
int firstChoice;
cin >> firstChoice; 

if (firstChoice == 1) {
  cout << "You chose to ski down the slope!" << endl;
  cout << "Suddenly, you hit a patch of ice and start sliding into absolute oblivion!" << endl; 
  cout << "Do you want to try to slow down by carving (1) or grab onto a tree (2)? " << endl;

  //skiChoice
  int skiChoice;
  cin >> skiChoice;

  if (skiChoice == 1) {
    cout << "You carve gracefully and come to a stop. You make it down safely!" << endl;
  }
  else if (skiChoice == 2) {
    cout << "You grab onto a tree, but it snaps! You tumble into a soft snowbank." << endl;
    cout << "Now, do you want to try to get back on your skis (1) or walk behind the snow bank (2)?" << endl;
    //recoveryChoice
    int recoveryChoice; 
    cin >> recoveryChoice; 

    if (recoveryChoice == 1) {
      cout << "You manage to get back on your skis and continue down the mountain safely!" << endl;
    } 
    else if (recoveryChoice == 2) {
      cout << "You find a daunting cave that seems cozy despite it's darkness." << endl;
      cout << "do you want to go in? yes (1), no (2)" << endl;
      //caveChoice
      int caveChoice;
      cin >> caveChoice; 

      if (caveChoice == 1) {
        cout << "cautiously walking in, you feel the air thin and water trinkling." << endl;
        cout << "Suddenly, you find a magical gem always shining a light in a singular direction" << endl;
        cout << "you decide to follow the light and manage to find a system that leads you safely out!" << endl;
      }
      else if (caveChoice == 2) {
        cout << "unfortunately, being extremely indecisive, you took too long..." << endl;
        cout << "SO LONG..." << endl; 
        cout << "THAT You got hit by an avalanche out of no where..." << endl;
      }
    }
    else {
      cout << "Invalid choice. You're stuck in the snow!" << endl;
    }
  } 
  else {
    cout << "Invalid choice. You're stuck in the snow!" << endl;
  }
} 
else if (firstChoice == 2) {
  cout << "You enter the abandoned cabin and find it filled with old gear." << endl;
  cout << "Suddenly, the door slams shut! Do you want to look for a way out (1) or try to open the door (2)?" << endl;

  //cabinChoice
  int cabinChoice; 
  cin >> cabinChoice; 

  if (cabinChoice == 1) {
    cout << "You find a hidden trapdoor to a slide all the way down! You escape safely!" << endl;
  }
  else if (cabinChoice == 2) {
    cout << "You push hard, but it's stuck. Do you want to use a nearby chair to break the door (1) or look for a window (2)?" << endl;
    //doorChoice
    int doorChoice; 
    cin >> doorChoice; 

    if (doorChoice == 1) {
      cout << "You break the door down and escape! Adrenaline kept you going the entire way down! WOW!" << endl;
    }
    else if (doorChoice == 2) {
      cout << "You find a window that opens and slip out into a... different dimension?!. TBC." << endl;
    }
    else {
      cout << "Invalid choice. You're stuck in the cabin FOREVER!" << endl;
    }
  }
}
else if (firstChoice == 3) {
  cout << "You enter the ice cave and are hypnotized by sparkling walls." << endl;
  cout << "But suddenly, you hear growling! It's A YETI!" << endl;
  cout << "Do you want to fight it (1) or try to sneak past it (2)?" << endl;
  
  //caveChoice2
  int caveChoice2;
  cin >> caveChoice2;

  if (caveChoice2 == 1) {
    cout << "you bravely confront the yeti! Do you want to throw a snowball (1) or try to talk to it (2)?" << endl;

    //fightChoice
    int fightChoice;
    cin >> fightChoice; 

    if (fightChoice == 1) {
      cout << "the yeti is distracted by the snowball and you BLAST OUT ASAP!" << endl;
    }
    else if (fightChoice == 2) {
      cout << "Surprisingly, the yeti is friendly and guides you to safety!" << endl;
    }
    else {
      cout << "Invalid choice. The yeti catches you!" << endl;
    }
  }
  else if (caveChoice2 == 2) {
    cout << "You sneak past quietly, but trip on a loose rock!" << endl;
    cout << "The yeti looks at you unamused and lets you go!" << endl;
    cout << "what a nice guy!" << endl;
  }
  else {
    cout << "Invalid choice. The yeti catches you!" << endl;
  }
} 
else {
  cout << "invalid choice, you can't start ): " << endl;
}

cout << "Thank you for playing! Remember, every choice leads you to different outcomes!" << endl;

return 0;

}

