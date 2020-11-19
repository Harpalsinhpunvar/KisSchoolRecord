#include<iostream>
#include<string>
using namespace std;

class KidSchool {

    public:
    int rollNumber;
    string kidName;
    float yearOld;

    void displayDetails();

};

void KidSchool::displayDetails() {
    cout << "Kid Rollno.: " << rollNumber << endl << "Kid Name: "<< kidName << endl << "Kid Year old: " << yearOld << endl << endl << endl;
}
int main() {

    KidSchool k1;
    k1.rollNumber = 108;
    k1.kidName = "Kia Poul";
    k1.yearOld = 1.5;

    k1.displayDetails();

    KidSchool k2;
    k2.rollNumber = 109;
    k2.kidName = "Peter Jeff";
    k2.yearOld = 2.6;

    k2.displayDetails();


    KidSchool k3;
    k3.rollNumber = 110;
    k3.kidName = "Steve Jobs";
    k3.yearOld = 11.5;

    k3.displayDetails();

    KidSchool k4;
    k4.rollNumber = 111;
    k4.kidName = "Keri Monzy";
    k4.yearOld = 15.8;

    k4.displayDetails();

    KidSchool k5;
    k5.rollNumber = 112;
    k5.kidName = "Bill Gates";
    k5.yearOld = 1.5;

    k5.displayDetails();

    KidSchool k6;
    k6.rollNumber = 113;
    k6.kidName = "Ammy Joffary";
    k6.yearOld = 16.9;

    k6.displayDetails();

    return 0;
}