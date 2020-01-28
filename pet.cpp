#include "pet.h"
#include <iostream>
#include <string>

using namespace std;

Pet::Pet(){ //default constructor
  m_name = "";
  m_age = 0;
  m_type = "";
  m_weight = 0.0;
}

Pet::Pet(string name, int age, string type, double weight){ //overloaded constructor
  m_name = name;
  m_age = age;
  m_type = type;
  m_weight = weight;
}

string Pet::getName(){ //name accessor
  return m_name;
}

int Pet::getAge(){ //age accessor
  return m_age;
}

string Pet::getType(){ //type accessor
  return m_type;
}

double Pet::getWeight(){ //weight accessor
  return m_weight;
}

void Pet::setName(string name){ //name mutator
  m_name = name;
}

void Pet::setAge(int age){ //age mutator
  m_age = age;
}

void Pet::setType(string type){ //string mutator
  m_type = type;
}

void Pet::setWeight(double weight){ //weight mutator
  m_weight = weight;
}
