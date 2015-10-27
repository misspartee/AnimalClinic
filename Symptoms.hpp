#ifndef Symptoms_hpp
#define Symptoms_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class Symptoms
//class declaration
//create a class named Symptoms
{
private:
    //private member varaible declaration
    bool vomiting;
    //create a boolean varaible named vomiting
    bool diarrhea;
    //create a boolean varaible named diarrhea
    bool weightLoss;
    //create a boolean varaible named weightLoss
    bool fever;
    //create a boolean varaible named fever
    bool chills;
    //create a boolean varaible named chills
    bool dehydration;
    //create a boolean varaible named dehydration
    bool biteMarks;
    //create a boolean varaible named biteMarks
    bool sneezing;
    //create a boolean varaible named sneezing
    bool coughing;
    //create a boolean varaible named coughing
    bool other;
    //create a boolean varaible named other
public:
    //public memeber function declaration
    Symptoms();
    //class constructor
    //default construtor named Symptoms
    Symptoms(bool v,bool d, bool w, bool f, bool ch,
             bool dh, bool b, bool s, bool c, bool o);
    //default construtor with ten boolean varaibles
    ~Symptoms();
    //deconstructor named ~Symptoms
    void setVomiting(bool v);
    //accessor member function named setVomiting with one boolean parameter
    bool getVomiting();
    //mutator member function named getVomiting with no parameters
    void setDiarrhea(bool d);
    //accessor member function named setDiarrhea with one boolean parameter
    bool getDiarrhea();
    //mutator member function named getDiarrhea with no parameters
    void setWeightLoss(bool w);
    //accessor member function named setWeightLoss with one boolean parameter
    bool getWeightLoss();
    //mutator member function named getWeightLoss with no parameters
    void setFever(bool f);
    //accessor member function named setFever with one boolean parameter
    bool getFever();
    //mutator member function named getFever with no parameters
    void setChills(bool ch);
    //accessor member function named setChills with one boolean parameter
    bool getChills();
    //mutator member function named getChills with no parameters
    void setDehydration(bool dh);
    //accessor member function named setDehydration with one boolean parameter
    bool getDehydration();
    //mutator member function named getDehydration with no parameters
    void setBiteMarks(bool b);
    //accessor member function named setBiteMarks with one boolean parameter
    bool getBiteMarks();
    //mutator member function named getBiteMarks with no parameters
    void setSneezing(bool s);
    //accessor member function named setSneezing with one boolean parameter
    bool getSneezing();
    //mutator member function named getSneezing with no parameters
    void setCoughing(bool c);
    //accessor member function named setCoughing with one boolean parameter
    bool getCoughing();
    //mutator member function named getCoughing with no parameters
    void setOther(bool o);
    //accessor member function named setOther with one boolean parameter
    bool getOther();
    //mutator member function named getOther with no parameters
    void getDiagnosis(bool v,bool d, bool w, bool f, bool ch,
                        bool dh, bool b, bool s, bool c, bool o);
    //member function named getDiagnosis with ten boolean parameters
};
#endif /* Symptoms_hpp */