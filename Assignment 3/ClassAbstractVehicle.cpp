#include<iostream>
#include<string>

using namespace std;

class Vehicle{
  public:
  virtual void describe() = 0;
};

class Car : public Vehicle{
  public:

  void describe () override{
    cout<<"This is a car..."<<endl;
  }

};
class Bike : public Vehicle{
    public:
   void describe() override{
    cout<<"This is a bike..."<<endl;
   }
};

int main()
{
  Car c1;
  Bike b1;
  c1.describe();
  b1.describe();
}