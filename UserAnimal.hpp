#include "Animal.hpp"
#ifndef UserAnimal_hpp
#define UserAnimal_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class UserAnimal : public Animal
//class declatation
//create a class named UserAnimal, derive this class from Animal class
{
private:
    //private member declaration
    string type;
    //create a string varaible named type
    string breed;
    //create a stirng variale named breed
    bool fur;
    //create a bool varaible bool named fur
public:
    UserAnimal();
    //class constructor
    //default constructor named UserAnimal
    UserAnimal(string l, string fn, int a, int w, string t, string b, bool f) : Animal(l, fn, a, w)
    //class constructor
    //UserAnimal overload constructor with the Animal overlad constructor parameters
    //four string parameters, two integer parameters and one bool parameter
    {
        type = t;
        //set t equal to type
        breed = b;
        //set b equal to breed
        fur = false;
        //set fur eqal to false
    }
    ~UserAnimal();
    //class deocnstructor named UsetAnimal
    void setType(string t);
    //mutator member function named setType with one string parameter
    string getType();
    //accessor member function named getType with no parameters
    void setBreed(string b);
    //mutator member function named setBreed with one string parameter
    string getBreed();
    //accessor member function named getBreed with no parameters
    void setFur(bool f);
    //mutator member function named setFur with one boolean parameter
    bool getFur();
    //accessor member function named getFur with no parameters
};
#endif /* UserAnimal_hpp */