#include <iostream>

#include "Booking.h"
#include "Flight.h"
#include <vector>

using namespace std;

namespace AirlineReservationSystemApp {
	Flight fl;
	Passenger pa;

	Booking::Booking(Flight fl, Passenger pa)
	{
		fl = fl;
		pa = pa;
		
	}




	/*int Booking::getPnrNumber()
	{
		return pnrNumber;
	}

	void Booking::setPnrNumber(int pnNumber)
	{
		pnrNumber = pnNumber;
	}*/

	/*void Booking::bookATicket(int flNumber, Passenger p)
	{
		if (fl.getFlightNumber() == flNumber)
		{
			cout << "Your Ticket is Booked" << endl;

		}


	}*/

  void Booking:: displayBookingDetails()
	{
		cout << "Passenger first Name: " << pa.getPassengerFirstName() << ","
			<< "Passenger last Name: " << pa.getPassengerLastName() << ", "
			<< "Passenger age: " <<pa.getPassengerAge()<< ","
			<< "Passenger phone Number: " << pa.getPassengerPhoneNumber() << ","
			<< "Flight Number: " << fl.getFlightNumber() << ","
			<< "Flight Name: " << fl.getFlightName() << ","
			<< "Flight Source: " << fl.getFlightSource() << ","
			<< "Flight Destination: " << fl.getFlightDestination() << ","
			<< "Flight Start Time: " << fl.getFlightStartTime() << ","
			<< "Flight Duration: " << fl.getFlightDuration() << ","
			<< "Flight Fare: " <<fl.getFlightFare() 

			<< endl;
	}

  
  
 
		
	

	



	

	
		
}