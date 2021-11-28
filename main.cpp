/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nicholas Smarsh
 */

#include "std_lib_facilities.h"

class Name_value 
{
  //make class public
    public:
    string name;
    int value;
    Name_value(string str, int val)
        :name(str), value(val) { }
};

int main() 
{
  //initilize variables
  string name;
  int value;
  vector<Name_value> Name_value_vector; 

  //ask for input
  cout << "enter '(name) (number)' when finished, type 'NoName0'\n";
  
  //loop until NoName 0 is typed
  while (cin>>name>>value && !(name == "NoName" && value == 0)) 
  {
    //scan through vector to see if name already exsist
    for (int i = 0; i<Name_value_vector.size(); ++i)
    {
      if (name == Name_value_vector[i].name) {
        cout << "error " << name << " already exsist.\n";
        exit(1);
      }
    }
    
    //put name and val class into vector and repeat
    Name_value_vector.push_back(Name_value(name,value));
  }

  //print the name with the int in parenthesis
  for (int i = 0; i<Name_value_vector.size(); ++i) {
      cout << "(" << Name_value_vector[i].name << ',' << Name_value_vector[i].value << ")\n";
  }
}

   