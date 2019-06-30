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
		Flight& addFlight(const int flNumber,const std::string& flName, const std::string& flSource, const std::string& flDestination,
			const int flStartTime, const int flDuration, const int flFare);

		Passenger& addPassenger(std::string& firstName, std::string& lastName, int age, int phoneNumber);

		//Booking& bookATicket(Flight theFlight, Passenger thePassenger);

		

		Flight& getFlightDetails(int flNumber);
		Flight& getFlightDetails(std::string& source, std::string& destination);

		int getFlightFare();
		
		void displayAllFlights();
	    bool SelectTheMatchingFlight(int flNumber);
	


		void DisplayBooking();
		void DisplayAllPassengers();

		
	
		
	private:
		std::vector<Flight> nFlights;
		std::vector<Booking> nBookings;
		std::vector<Passenger> nPassengers;
		int kNextFlightNumber = 100;
		
		
	};
}
