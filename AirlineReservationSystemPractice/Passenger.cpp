#include "stdafx.h"
#include <iostream>
#include "Passenger.h"

using namespace std;

namespace AirlineReservationSystemApp {
	Passenger::Passenger(std::string& firstName, std::string& lastName, int age, int phoneNumber)
	{
		pFirstName = firstName;
		pLastName = lastName;
		pAge = age;
		pPhoneNumber = phoneNumber;
	}
	
	std::string& Passenger::getPassengerFirstName()
	{
		return pFirstName;
	}
	std::string& Passenger::getPassengerLastName()
	{
		return pLastName;
	}
	int Passenger::getPassengerAge()
	{
		return pAge;
	}
	int  Passenger::getPassengerPhoneNumber()
	{
		return pPhoneNumber;
	}


	void Passenger::display() {
		cout << "Passenger first Name: " << getPassengerFirstName() << ", "
			<< "Passenger last Name: " << getPassengerLastName() << ", "
			<< "Passenger age: " << getPassengerAge() << ", "
			<< "Passenger phone Number: " << getPassengerPhoneNumber() 
			 
			<< endl;
	}

	

}