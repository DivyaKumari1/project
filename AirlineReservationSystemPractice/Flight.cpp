#include <iostream>

#include "Flight.h"

using namespace std;

namespace AirlineReservationSystemApp {
	Flight::Flight(int flNumber, std::string& flName, std::string& flSource, std::string& flDestination,
		int flStartTime, int flDuration, int flFare)
	{
		fNumber = flNumber;
		fName = flName;
		fSource = flSource;
		fDestination = flDestination;
		fStartTime = flStartTime;
		fDuration = flDuration;
		fare = flFare;
	}

	int Flight::getFlightNumber()
	{
		return fNumber;
	}

	void Flight::setFlightNumber(int flightNumber) {
		fNumber = flightNumber;
	}

	std::string& Flight::getFlightName()
	{
		return fName;
	}

	std::string& Flight::getFlightSource()
	{
		return fSource;
	}

	std::string& Flight::getFlightDestination()
	{
		return fDestination;
	}

	int Flight::getFlightStartTime()
	{
		return fStartTime;
	}

	int Flight::getFlightDuration()
	{
		return fDuration;
	}

	int Flight::getFlightFare()
	{
		return fare;
	}
	
					
	
	void Flight::display() {
		cout << "Flight Number: " << getFlightNumber() << ", " 
			<< "Flight Name: " << getFlightName() << ", "
			<< "Flight Source: " << getFlightSource() << ", "
			<< "Flight Destination: " << getFlightDestination() << ", "
			<< "Flight Start Time: " << getFlightStartTime() << ", "
			<< "Flight Duration: " << getFlightDuration() << ", "
			<< "Flight Fare: " << getFlightFare()
			<< endl;
	}

	
}