#include "Animal.hpp"

Animal::Animal()
//function definition for the class constructor with no parameters
{
    lastName = " ";
    //initalize the lastName variable to an empty string
    firstName = " ";
    //initalize the firstName variable to an empty string
    age = 0;
    //initalize the age varaiable to zero
    weight = 0;
    //initalize the weigth varaible to zero
}

Animal::Animal(string l, string fn, int a, int w)
//function definition for the class overload constructor with two string parameters and two integer parameters
{
    lastName = l;
    //set l equal to lastName
    firstName = fn;
    //set fn equal to firstName
    age = a;
    //set a equal to age
    weight = w;
    //set w equal to weight
}

Animal::~Animal()
//function definition for the class deconstructor with no parameters
{
    cout << "This is the Animal class deconstructor" << endl;
    //display to the user that this is the Animal class deconstructor
}

void Animal::setLastName(string l)
//function header for the setLast Name member function with one string parameter
{
    lastName = l;
    //set l equal to lastName
}

string Animal::getLastName()
//function header for the getLastName member function with no parameters
{
    return lastName;
    //return the lastName variable
}

void Animal::setFistName(string fn)
//function header for the setfirstName member function with one string parameter
{
    firstName = fn;
    //set f equal to firstName
}

string Animal::getFirstName()
//function header for the getfirstName member function with no parameters
{
    return firstName;
    //return the firstName variable
}

void Animal::setAge(int a)
//fucntion header for the setAge member function with one integer parameter
{
    age = a;
    //set a equal to age
}

int Animal::getAge()
//function header for the getAge member function with no parameters
{
    return age;
    //return the age variable
}

void Animal::setWeight(int w)
//function header for the setWeight member funciton with one integer parameter
{
    weight = w;
    //set w equal to weight
}

int Animal::getWeight()
//function header for the getWeight member function with no parameters
{
    return weight;
    //return the weight varaible
}