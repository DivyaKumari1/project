#pragma once
#include<string>
#include "Flight.h"
#include "Passenger.h"

namespace AirlineReservationSystemApp {
	class Booking {
	public:
		Flight fl;
		Passenger pa;
		Booking() = default;
		Booking( Flight fl,Passenger pa, std::string source, std::string destination);

		/*int getPnrNumber();
		void setPnrNumber(int pnrNumber);*/
		/*std::string& getPassengerName();
		int getPassengerAge();
		int getPassengerPhoneNo();*/
		std::string& getSource();
		std::string& getDestination();

		//implementing flight prop
		/*std::string& getFlightName();
		*/
		
		
		void displayBookingDetails();
		void BookATicket();


	private:
		int pnrNumber = -1;
		/*std::string passengerName;
		int passengerAge;
		int passengerPhoneNo;*/
		std::string bSource;
		std::string bDestination;
	/*	std::string fName;*/
		
		
	};

}

