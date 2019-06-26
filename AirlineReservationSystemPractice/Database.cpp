#include "stdafx.h"
#include <iostream>
#include "Database.h"
#include "Booking.h"
#include "Passenger.h"
#include "Flight.h"



using namespace std;

namespace AirlineReservationSystemApp {
	Flight theFlight;
	Flight& Database::addFlight(std::string& flName, std::string& flSource, std::string& flDestination,
		int flStartTime, int flDuration, int flFare)
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

	/*Booking& Database::addTicket(Flight fl, Passenger pa, std::string source, std::string destination)
	{
		
	
		Booking theBooking(fl,pa,source,destination);
	bool x=	displaySearchedFlight(source, destination);
	if (x==true)
	{
		Booking theBooking(fl,pa,source,destination);
		
		nBookings.push_back(theBooking);
		

	}
		*/
		
		//displaySearchedFlight(pSource, pDestination);
		
		

		return theBooking;
	}

	

	/*void Database:: DisplayBooking()
	{
		for(auto& booking : nBookings)
		{
			booking.displayBookingDetails();

		}

	}*/

	void Database::DisplayAllPassengers()
	{
		for  (auto& passenger : nPassengers)
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

	bool Database::displaySearchedFlight(std::string& source, std::string& destination)
	{
		for (auto& flight : nFlights) {
			if (flight.getFlightSource()== source && flight.getFlightDestination()==destination)
			{
				cout << "Ticket is available! " << endl;
				flight.display();
				//cout << "Ticket is booked successfully! " << endl;
				return true;

			}
			else
			
				{
					cout << "Ticket is not available!" << endl;
					return false;
				}
			
			
		}
		return true;
		
		
			

	}
	
	

	
}