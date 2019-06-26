#pragma once
#include<string>

namespace AirlineReservationSystemApp {

	class Passenger
	{
	public:
		Passenger() = default;
		Passenger(std::string& firstName, std::string& lastName,int age,int phoneNumber);
		
		

		std::string& getPassengerFirstName();
		std::string& getPassengerLastName();
		int getPassengerAge();
		int getPassengerPhoneNumber();

		void display();

		
		



	private:
		std::string pFirstName;
		std::string pLastName;
		int pAge;
		int pPhoneNumber;
		
	};
}