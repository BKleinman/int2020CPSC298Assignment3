/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include <iostream>
#include <string>

using namespace std;

class Pet
{
  public:
    Pet(); //default constructor
    Pet(string name, int age, string type, double weight); //overloaded constructor

    //accessor methods
    string getName();
    int getAge();
    string getType();
    double getWeight();

    //mutator methods
    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

  private:
    //instance variables
    string m_name;
    int m_age;
    string m_type;
    double m_weight;

};
