#include<iostream>
#include<string>
using namespace std;

class Vehicle{
   public:
    string companyName ;
    string carName  ;
    int year ;
};

class Car : public Vehicle{
  public:
    string carType;
};

class ElectricCar: public Car{
      public:
      string batteryHealth;

      void showDetails(){
        cout<<"-----------------------------------"<<endl;
        cout<<"Company name: "<<companyName<<endl;
        cout<<"Car name: "<<carName<<endl;
        cout<<"Car type: "<<carType<<endl;
        cout<<"Battery Health: "<<batteryHealth<<endl;
        cout<<"-----------------------------------"<<endl;
      }
};


int main()
{
  ElectricCar e1;
  e1.companyName = "Tata";
  e1.carName = "Curv";
  e1.carType = "Cidan";
  e1.batteryHealth = "Good";

  e1.showDetails();
}