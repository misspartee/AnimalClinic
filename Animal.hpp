#ifndef Animal_hpp
#define Animal_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class Animal
//class declaration
//create a class named Animal
{
private:
    //private member varaible declaration
    string lastName;
    //create a string varaible named lastName
    string firstName;
    //create a string varaible named firstName
    int age;
    //create an integer varaible named age
    int weight;
    //create an integer varaible named weight
public:
    //public member funciton declaration
    Animal();
    //class constructor
    //default constructor named Animal
    Animal(string l, string fn, int a, int w);
    //class constructor
    //overload constructor named Animal with three string parameters and two integer parameters
    ~Animal();
    //deconstructor named Animal
    void setLastName(string l);
    //mutator member function named setLastName with one string parameter
    string getLastName();
    //accessor member function named getLastName with no parameters
    void setFistName(string fn);
    //mutator member function named setFirstName with one string parameter
    string getFirstName();
    //accessor member function named getFirstName with no parameters
    void setAge(int a);
    //mutator member function named setAge with one integer parameter
    int getAge();
    //accessor member function named getAge with no parameters
    void setWeight(int w);
    //mutator member function named setWeight with one integer parameter
    int getWeight();
    //accessor member function named getWeight with no parameters
};
#endif /* Animal_hpp */