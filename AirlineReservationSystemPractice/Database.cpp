#include "stdafx.h"
#include <iostream>
#include "Database.h"
#include "Booking.h"
#include "Passenger.h"
#include "Flight.h"
#include <vector>



using namespace std;

namespace AirlineReservationSystemApp {

	Passenger thePassenger;
	Flight theFlight;


	Flight& Database::addFlight(const int flNumber, const std::string& flName, const std::string& flSource, const std::string& flDestination,
		const int flStartTime, const int flDuration, const int flFare)
	{

		Flight theFlight(kNextFlightNumber++, flName, flSource, flDestination, flStartTime, flDuration, flFare);
		nFlights.push_back(theFlight);
		return theFlight;
	}

	

	Passenger& Database::addPassenger(std::string& firstName, std::string& lastName, int age, int phoneNumber)
	{
		Passenger thePassenger(firstName, lastName, age, phoneNumber);
		nPassengers.push_back(thePassenger);
		return thePassenger;

	}




	//displaySearchedFlight(pSource, pDestination);








	void Database::DisplayBooking()
	{
		for (auto& booking : nBookings)
		{
			booking.displayBookingDetails();

		}

	}

	void Database::DisplayAllPassengers()
	{
		for (auto& passenger : nPassengers)
		{
			passenger.display();



		}

	}

	void Database::displayAllFlights()
	{
		for (auto& flight : nFlights) {
			flight.display();
		}
	}

	bool Database::SelectTheMatchingFlight(int flNumber)
	{
		for (auto& flight : nFlights) {
			if (flight.getFlightNumber() == flNumber)
			{
				cout << "Your Ticket is Booked successfully in following flight! " << endl;
				
				
				flight.display();
				//cout << "Ticket is booked successfully! " << endl;
				return true;

			}
			else

			{
				//cout << "Ticket is not available!" << endl;
				return false;
			}


		}
		return true;
	}
}
	
	

	

