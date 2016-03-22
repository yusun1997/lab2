#include "BMI.h"
#include <cmath>
#include <string>
#include <iostream>

float newBMI;

void BMI::setBMI(float h, int m){
	height = h;
	mass = m;
}
float BMI::getheight(){
	return height*0.01 ;
}
int BMI::getmass(){
	return mass;
}
float BMI::getBMI(float height,int mass){
	return mass/( height*height/10000 );
	
}
string BMI::category(float height,int mass){
	float newBMI=getBMI(height,mass);

	if(newBMI < 15){
		return "Very severely underweight"; }

	else if (newBMI <=16){
		return "Severely underweight"; }

	else if (newBMI <=18.5){
		return "Underweight"; }

	else if (newBMI <=25){
		return "Normal"; }

	else if (newBMI <=30){
		return "Overweight"; }

	else if (newBMI <=35){
		return "Obese Class I(Moderately obese)"; }

	else if (newBMI <=40){
		return "Obese Class II(Severely obese)"; }

	else if (newBMI > 40) {
		return "Obese Clase III(Very severely obese)"; }
	
	else 
		return "WTF" ;
}
