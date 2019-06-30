#pragma once
#include<string>
#include "Flight.h"
#include "Passenger.h"
#include <vector>

namespace AirlineReservationSystemApp {
	class Booking {
	public:
		Flight fl;
		Passenger pa;
		Booking() = default;
		Booking( Flight fl,Passenger pa);

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


		void bookATicket(int flNumber);


		


	private:
	//nt pnrNumber = -1;
		/*std::string passengerName;
		int passengerAge;
		int passengerPhoneNo;*/
		std::string bSource;
		std::string bDestination;
		std::vector<Booking> nBookings;
	/*	std::string fName;*/
		
		
	};

}

