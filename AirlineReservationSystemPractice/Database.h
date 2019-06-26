#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Flight.h"
#include "Booking.h"
#include "Passenger.h"


namespace AirlineReservationSystemApp {
	//const int kFirstFlightNumber = 100;
	class Database 
	{
	public:
		Flight& addFlight(std::string& flName, std::string& flSource, std::string& flDestination,
			int flStartTime, int flDuration, int flFare);

		Passenger& addPassenger(std::string& firstName, std::string& lastName, int age, int phoneNumber);

		Booking& addTicket(Flight fl,Passenger pa,std::string& pSource, std::string& pDestination);

		

		Flight& getFlightDetails(int flNumber);
		Flight& getFlightDetails(std::string& source, std::string& destination);

		int getFlightFare();
		
		void displayAllFlights();
	    bool displaySearchedFlight(std::string& source, std::string& destination);



		void DisplayBooking();
		void DisplayAllPassengers();

		
	
		
	private:
		std::vector<Flight> nFlights;
		std::vector<Booking> nBookings;
		std::vector<Passenger> nPassengers;
		int kNextFlightNumber = 100;
		
		
	};
}
