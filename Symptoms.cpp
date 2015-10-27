#include "Symptoms.hpp"
#include <iostream>
using namespace std;

Symptoms::Symptoms()
//function header for the class default constructor with no parameters
{
    vomiting = false;
    //set vomiting equal to false
    diarrhea = false;
    //set diarrhea equal to false
    weightLoss = false;
    //set weightLoss equal to false
    fever = false;
    //set fever equal to false
    chills = false;
    //set chills equal to false
    dehydration = false;
    //set dehydration equal to false
    biteMarks = false;
    //set biteMarks equal to false
    sneezing = false;
    //set sneezing equal to false
    coughing = false;
    //set coughing equal to false
    other = false;
    //set other equal to false
}

Symptoms::Symptoms(bool v,bool d, bool w, bool f,bool ch,
                   bool dh, bool b, bool s, bool c, bool o)
//function header for the class overload constructor with ten boolean parameters
{
    vomiting = v;
    //set vomiting equal to v
    diarrhea = d;
    //set diarrhea equal to d
    weightLoss = w;
    //set weightLoss equal to w
    fever = f;
    //set fever equal to f
    chills = ch;
    //set chills equal to ch
    dehydration = dh;
    //set dehydration equal to dh
    biteMarks = b;
    //set biteMarks equal to b
    sneezing = s;
    //set sneezing equal to s
    coughing = c;
    //set coughing equal to c
    other = o;
    //set other equal to o
}

Symptoms::~Symptoms()
//function header for the class deconstrutor with no paramerters
{
    cout << "This is the Symptoms class deconstructor" << endl;
    //display to the user what class deconstructor we are currently in
}

void Symptoms::setVomiting(bool v)
//function header for the setVomiting member fucntion with one boolean parameter
{
    vomiting = v;
    //set v equal to vomiting
}

bool Symptoms::getVomiting()
//function header for the getVomiting member function with no parameters
{
    return  vomiting;
    //return the varaible vomiting
}

void Symptoms::setDiarrhea(bool d)
//function header for the setDiarrhea member fucntion with one boolean parameter
{
    diarrhea = d;
    //set d equal to diarrhea
}

bool Symptoms::getDiarrhea()
//function header for the getDiarrhea member function with no parameters
{
    return diarrhea;
    //return the varaible diarrhea
}

void Symptoms::setWeightLoss(bool w)
//function header for the setWeightLoss member fucntion with one boolean parameter
{
    weightLoss = w;
    //set w equal to weightLoss
}

bool Symptoms::getWeightLoss()
//function header for the getWeightLoss member function with no parameters
{
    return weightLoss;
    //return the varaible weightLoss
}

void Symptoms::setFever(bool f)
//function header for the setFever member fucntion with one boolean parameter
{
    fever = f;
    //set f equal to fever
}

bool Symptoms::getFever()
//function header for the getFever member function with no parameters
{
    return fever;
    //return the varaible fever
}

void Symptoms::setChills(bool ch)
//function header for the setChills member fucntion with one boolean parameter
{
    chills = ch;
    //set ch equal to chills
}

bool Symptoms::getChills()
//function header for the getChills member function with no parameters
{
    return chills;
    //return the varaible chills
}

void Symptoms::setDehydration(bool dh)
//function header for the setDehydration member fucntion with one boolean parameter
{
    dehydration = dh;
    //set dh equal to dehydration
}

bool Symptoms::getDehydration()
//function header for the getDehydration member function with no parameters
{
    return dehydration;
    //return the varaible dehydration
}

void Symptoms::setBiteMarks(bool b)
//function header for the setBiteMarks member fucntion with one boolean parameter
{
    biteMarks = b;
    //set b equal to biteMarks
}

bool Symptoms::getBiteMarks()
//function header for the getBiteMark member function with no parameters
{
    return biteMarks;
    //return the varaible biteMarks
}

void Symptoms::setSneezing(bool s)
//function header for the setSneezing member fucntion with one boolean parameter
{
    sneezing = s;
    //set s equal to sneezing
}

bool Symptoms::getSneezing()
//function header for the getSneezing member function with no parameters
{
    return sneezing;
    //return the varaible sneezing
}

void Symptoms::setCoughing(bool c)
//function header for the setCoughing member fucntion with one boolean parameter
{
    coughing = c;
    //set c equal to coughing
}

bool Symptoms::getCoughing()
//function header for the getcoughing member function with no parameters
{
    return coughing;
    //return the varaible coughing
}

void Symptoms::setOther(bool o)
//function header for the setOther member fucntion with one boolean parameter
{
    other = o;
    //set o equal to other
}

bool Symptoms::getOther()
//function header for the getOther member function with no parameters
{
    return other;
    //return the varaible other
}

void Symptoms::getDiagnosis(bool v, bool d, bool w, bool f, bool ch, bool dh, bool b, bool s, bool c, bool o)
{
    if (v == 1)
    {
        cout << "It seems your Animal has the flue" << endl;
    }
    else if (w == 1)
    {
        cout << "It seems your animal has rabies" << endl;
    }
    else
    {
        cout << "It seems your animal has chicken pox" << endl;
    }
}
