#include <iostream>
  using namespace std;
  class BMI {
  public:
  BMI();
  void setheight(float h);
   void setmass(float m);
   float getmass();
   float getheight();
   float getBMI(float m , float h);
   string fucklab2(float BMI);
  private:
  float height;
  float mass; 
 };
 

