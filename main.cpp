//notes: add diagnosis(figure out set up), treatments(in home or office visit), payment(use pointers here/possibly have a linkedList with a long int card number, int date, and int cvc) figure out virutal function(maybe a check-out or exitClinic function)
#include "UserAnimal.hpp"
#include "Symptoms.hpp"
#include <iostream>
using namespace std;

int main()
{
    string lastName;
    string firstName;
    string type;
    string breed;
    string input;
    int age;
    int weight;
    bool fur;
    bool vomiting;
    bool diarrhea;
    bool weightLoss;
    bool fever;
    bool chills;
    bool dehydration;
    bool biteMarks;
    bool sneezing;
    bool coughing;
    bool other;
    //create varaibles
    
    
    
    cout << "Welcome to The Animal Clinic!" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Check-in your animal below:" << endl;
    cout << "---------------------------" << endl;
    //display opening statement to users
    
    
    
    cout << "Last Name: ";
    cin >> lastName;
    cout << "First Name: ";
    cin >> firstName;
    cout << "Age in years: ";
    cin >> age;
    cout << "Weight in lbs: ";
    cin >> weight;
    cout << "Type (ex:Dog/Cat): ";
    cin >> type;
    cout << "Breed (answer in one word): ";
    cin >> breed;
    cout << "Fur (True = 1, False = 0): ";
    cin >> fur;
    //get the users input
    
    
    
    
    UserAnimal PetOne(lastName, firstName, age, weight, type, breed, fur);
    //assign the inputs to variables in the object PetOne
    
    
    
    
    cout << " " << endl;
    cout << "Your " << PetOne.getType() << " " << PetOne.getFirstName() << " ";
    cout << PetOne.getLastName() << " is now checked in!" << endl;
    cout << " " << endl;
    cout << "Please fill out the symptoms report below:" << endl;
    cout << "------------------------------------------" << endl;
    //display to the user
    
    
    
    
    cout << "Is your " << PetOne.getType() << " vomiting?" << endl;
    cout << "True = 1, False = 0: ";
    cin >> vomiting;
    cout << "Does your " << PetOne.getType() << " have diarrhea?" << endl;
    cout << "True = 1, False = 0: ";
    cin >> diarrhea;
    cout << "Has your " << PetOne.getType() << " lost a significant amount of weight?" << endl;
    cout << "True = 1, False = 0: ";
    cin >> weightLoss;
    cout << "Does your " << PetOne.getType() << " have a fever?" << endl;
    cout << "True = 1, False = 0: ";
    cin >> fever;
    cout << "Does your " << PetOne.getType() << " have the chills?" << endl;
    cout << "True = 1, False = 0: ";
    cin >> chills;
    cout << "Is your " << PetOne.getType() << " dehydrated?" << endl;
    cout << "True = 1, False = 0: ";
    cin >> dehydration;
    cout << "Does your " << PetOne.getType() << " have bite marks anywhere on their body?" << endl;
    cout << "True = 1, False = 0: ";
    cin >> biteMarks;
    cout << "Is your " << PetOne.getType() << " sneezing?" << endl;
    cout << "True = 1, False = 0: ";
    cin >> sneezing;
    cout << "Is your " << PetOne.getType() << " coughing?" << endl;
    cout << "True = 1, False = 0: ";
    cin >> coughing;
    cout << "Is there something wrong with your " << PetOne.getType();
    cout << " other than what was previously asked:" << endl;
    cout << "True = 1, False = 0: ";
    cin >> other;
    //get the users input
    
    
    
    
    Symptoms sickAnimal(vomiting, diarrhea, weightLoss, fever, chills,
             dehydration, biteMarks, sneezing, coughing, other);
    //assign the inputs to variables in the object in sickAnimal
    
    
    
    
    
    sickAnimal.getDiagnosis(vomiting, diarrhea, weightLoss, fever, chills,
                        dehydration, biteMarks, sneezing, coughing, other);
    //using the sick animal object call the function getDiagnosis and pass in ten boolena parameters

    
    return 0;
}