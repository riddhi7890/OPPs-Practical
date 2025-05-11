#include<iostream>
#include<string>
using namespace std;
class Shape{

   public:
   
    void draw() {
    cout<<"Drawing a shape...";
   }
};
 
class Circle : public Shape{
     public:
    void draw(){
        cout<<"Drawing a Circle..."<<endl;
     }
};
class Rectangle : public Shape{
     public:
     void draw(){
        cout<<"Drawing a Rectangle..."<<endl;
     }
};

using namespace std;
int main()
{
   Circle c1;
   Rectangle r1;

   c1.draw();
   r1.draw();

   
}