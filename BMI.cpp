#include "BMI.h"
  BMI::BMI() { setheight(0); setmass(0); }
  void BMI::setheight(float h ) {
    height=h/100;
  }
    void BMI::setmass(float m){
    mass=m;
    }
  float BMI::getheight() {
  return height;
  }
  float BMI::getmass() {
  return mass;
  }
    float BMI::getBMI(float m,float h)
    {
	return m/(h*h);
    }
    string BMI::fucklab2(float BMI){
    if(BMI<15.0)
    return "Very severely underweight";
    else if(BMI<16.0&&BMI>=15.0)
    return "Severly underweight";
    else if (BMI<18.5&&BMI>=16.0)
    return "Underweight";
    else if (BMI<25.0&&BMI>=18.5)
    return "Normal";
    else if (BMI<30.0&&BMI>=25.0)
    return "Overweight";
    else if (BMI<35.0&&BMI>=30.0)
    return "Obese Class I (Moderately obese) ";
    else if (BMI<40.0&&BMI>=35.0)
    return "Obese Class II (Severely obese) ";
    else if (BMI>=40)
    return "Obese Class III (Very severely obese) ";
    }











