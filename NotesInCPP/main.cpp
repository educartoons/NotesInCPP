//
//  main.cpp
//  NotesInCPP
//
//  Created by Eduar Apaza Yáñez on 8/13/16.
//  Copyright © 2016 Eduar Apaza Yáñez. All rights reserved.
//

#include <iostream>
#include <string>

using std::cout;
using std::endl;

struct Skills{
  
  int attack;
  int defense;
  int agility;
  
};

struct Pokemon{
  
  char name[40];
  int id;
  struct Skills skill;

};


int main(int argc, const char * argv[]) {
  
  struct Pokemon poke;
  
  strcpy(poke.name, "Pikachu");
  poke.id = 15;
  poke.skill.attack = 35;
  poke.skill.defense = 31;
  poke.skill.agility = 53;
  
  cout<<"Name: "<<poke.name<<endl;
  cout<<"Attack: "<<poke.skill.attack<<endl;
  cout<<"Name: "<<poke.skill.defense<<endl;
  
  
}
