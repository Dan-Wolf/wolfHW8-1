#include<iostream>
#include<string>
#include"AnalogIn.h"

using namespace std;

int main() {
	AnalogIn temp(0);
	cout << "ADC number is " << temp.getNumber() << endl;
	cout << "ADC reading is " << temp.readADCsample() << endl;
	float cur_voltage = temp.readADCsample() * (1.80f/4096.0f);
	float diff_degreesC = (cur_voltage-0.75f)/0.01f;
	cout << "Temp is " << (25.0f + diff_degreesC) << endl;
	return 0;
}
