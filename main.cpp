/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include "pet.h"

int main(int argc, char **argv){
  //creating two objects of the pet class
  Pet* pet1 = new Pet("Boomer", 10, "Dog", 15.5);
  Pet* pet2 = new Pet("Max", 9, "Cat", 12.3);

  //printing pet1's info
  cout << "Pet 1 Name: " << pet1->getName() << endl;
  cout << "Pet 1 Age: " << pet1->getAge() << endl;
  cout << "Pet 1 Type: " << pet1->getType() << endl;
  cout << "Pet 1 Weight: " << pet1->getWeight() << endl;

  //printing pet2's info
  cout << "Pet 2 Name: " << pet2->getName() << endl;
  cout << "Pet 2 Age: " << pet2->getAge() << endl;
  cout << "Pet 2 Type: " << pet2->getType() << endl;
  cout << "Pet 2 Weight: " << pet2->getWeight() << endl;

  //deleting pets
  delete pet1;
  delete pet2;

  return 0;
}
