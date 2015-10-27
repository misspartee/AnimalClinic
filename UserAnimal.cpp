#include "UserAnimal.hpp"

UserAnimal::UserAnimal()
//function header for the class constructor with no parameters
{
    type = " ";
    //set type equal to an empty string
    breed = " ";
    //set breed equal to an empty string
    fur = false;
    //set fur equal to false
}

UserAnimal::~UserAnimal()
//function header for the class deconstructor with no parameters
{
    cout << "This is the UserAnimal class deconstructor" << endl;
    //display to the user which deconstructor we are currently in
}

void UserAnimal::setType(string t)
//function header for the setType member function with one string parameter
{
    type = t;
    //set t equal to type
}

string UserAnimal::getType()
//function header for the getType member function with no parameters
{
    return type;
    //return the varaible type
}

void UserAnimal::setBreed(string b)
//function header for the setBreed member function with one string parameter
{
    breed = b;
    //set b equal to breed
}

string UserAnimal::getBreed()
//function header for the getBreed member function with no parameters
{
    return breed;
    //return the varaible breed
}

void UserAnimal::setFur(bool f)
//function header for the setFur member function with one string parameter
{
    fur = f;
    //set f equal to fur
}

bool UserAnimal::getFur()
//function header for the getFur member function with no parameters
{
    return fur;
    //return the variable fur
}