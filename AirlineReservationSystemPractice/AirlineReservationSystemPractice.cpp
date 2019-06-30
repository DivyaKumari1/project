// AirlineReservationSystemPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "stdafx.h"
#include <iostream>
#include "Database.h"
#include "Passenger.h"
#include "Booking.h"
#include "Flight.h"

using namespace std;
using namespace AirlineReservationSystemApp;

int displayMenu();
void populateDatabase(Database& flightDB);
void displayAllFlights(Database& flightDB);
void FlightDoYouWantToBook(Database& flightDB);
void addPassenger(Database& flightDB);
void DisplayAllPassengers(Database& flightDB);
//void addTicket(Database& flightDB);
//bool displaySearchedFlight(Database& flightDB);
//void DisplayBooking(Database& flightDB);
Flight flight;
Passenger passenger;




int main()
{
	Database flightDB;
	populateDatabase(flightDB);

	while (true) {
		int selection = displayMenu();
		switch (selection) {
			case 0:
				return 0;
			case 1:
				displayAllFlights(flightDB);
				break;
			case 2:
				FlightDoYouWantToBook(flightDB);
				break;
			case 3:
				addPassenger(flightDB);
				break;
			case 4:
				DisplayAllPassengers(flightDB);
				break;
			case 5:
				//addTicket(flightDB);
				break;
			case 6:
				//displaySearchedFlight(flightDB);
				break;
			case 7:
				//DisplayBooking(flightDB);
				break;


			default:
				cerr << "Unknown command." << endl;
				break;
		}
	}


	return 0;
}


int displayMenu()
{
	int selection;

	cout << endl;
	cout << "Airline Reservation System" << endl;
	cout << "-----------------" << endl;
	cout << "1) Display all flights" << endl;
	cout << "2) In Which Flight do you want to book a seat?" << endl;
	cout << "3) Fill your details" << endl;
	cout << "4) Display all passenger details" << endl;
	cout << "0) Quit" << endl;
	cout << endl;
	cout << "---> ";


cin >> selection;

	return selection;
}
void populateDatabase(Database& flightDB)
{

	flightDB.Database::addFlight(100, "Emirates", "Seattle", "Dubai", 900, 2, 190);
	flightDB.Database::addFlight(200, "Delta Airlines", "London", "Delhi", 800, 2, 190);
	flightDB.Database::addFlight(300, "Delta Airlines", "London", "seattle", 1100, 2, 190);
	flightDB.Database::addFlight(400, "Delta Airlines", "seattle", "Delhi", 800, 9, 590);
	flightDB.Database::addFlight(500, "British Airways", "London", "seattle", 800, 2, 190);
}


void FlightDoYouWantToBook(Database& flightDB)

{
	int flightNo;
	string fname;
	string  sname;
	int age;
	int pNumber;
	cout << "flight no? ";
	cin >> flightNo;
	cout << "firstname? ";
	cin >> fname;
	cout << "lastname? ";
	cin >> sname;
	cout << "age? ";
	cin >> age;
	cout << "phoneNumber? ";
	cin >> pNumber;



	//flightDB.bookATicket(flightNo);

	populateDatabase(flightDB);
	{
		if (flightNo==100)
		{
			flightDB.SelectTheMatchingFlight(flightNo);
			cout << "Ticket is:" << ", "
				<< "Flight Number: " << 100 << ", "
				<< "Flight Name: " << "Emirates" << ", "
				<< "Flight Source: " << "seattle" << ", "
				<< "Flight Destination: " << "Dubai" << ", "
				<< "Flight Start Time: " << 900 << ", "
				<< "Flight Duration: " << 2<< ", "
				<< "Flight Fare: " << 190<<","
				<<"Passenger first name: " <<fname <<","
				<<"Passenger second name: " <<sname <<","
				<<"Passenger age: " <<age << ","
				<<"Passenger phone number: " <<pNumber
				<< endl;
			
		}

		else if (flightNo == 200)
		{
			flightDB.SelectTheMatchingFlight(flightNo);
			cout << "Ticket is:" << ", "
				<< "Flight Number: " << 200 << ", "
				<< "Flight Name: " << "Delta Airlines" << ", "
				<< "Flight Source: " << "London" << ", "
				<< "Flight Destination: " << "Delhi" << ", "
				<< "Flight Start Time: " << 800 << ", "
				<< "Flight Duration: " << 2 << ", "
				<< "Flight Fare: " << 190 << ","
				<< "Passenger first name" << fname << ","
				<< "Passenger second name" << sname << ","
				<< "Passenger age" << age << ","
				<< "Passenger phone number" << pNumber
				<< endl;

		}

		else if (flightNo == 300)
		{
			cout << "Ticket is:" << ", "
				<< "Flight Number: " << 300 << ", "
				<< "Flight Name: " << "Delta Airlines" << ", "
				<< "Flight Source: " << "London" << ", "
				<< "Flight Destination: " << "seattle" << ", "
				<< "Flight Start Time: " << 1100 << ", "
				<< "Flight Duration: " << 2 << ", "
				<< "Flight Fare: " << 190 << ","
				<< "Passenger first name" << fname << ","
				<< "Passenger second name" << sname << ","
				<< "Passenger age" << age << ","
				<< "Passenger phone number" << pNumber
				<< endl;

		}

		else if (flightNo == 400)
		{
			cout << "Ticket is:" << ", "
				<< "Flight Number: " << 400 << ", "
				<< "Flight Name: " << "Delta Airlines" << ", "
				<< "Flight Source: " << "seattle" << ", "
				<< "Flight Destination: " << "Delhi" << ", "
				<< "Flight Start Time: " << 800 << ", "
				<< "Flight Duration: " << 9 << ", "
				<< "Flight Fare: " << 590 << ","
				<< "Passenger first name" << fname << ","
				<< "Passenger second name" << sname << ","
				<< "Passenger age" << age << ","
				<< "Passenger phone number" << pNumber
				<< endl;

		}

		else if  (flightNo == 500)
		{
			cout << "Ticket is:" << ", "
				<< "Flight Number: " << 500 << ", "
				<< "Flight Name: " << "British Airways" << ", "
				<< "Flight Source: " << "London" << ", "
				<< "Flight Destination: " << "seattle" << ", "
				<< "Flight Start Time: " << 800 << ", "
				<< "Flight Duration: " << 2 << ", "
				<< "Flight Fare: " << 190 << ","
				<< "Passenger first name" << fname << ","
				<< "Passenger second name" << sname << ","
				<< "Passenger age" << age << ","
				<< "Passenger phone number" << pNumber
				<< endl;

		}
		else
		{
			cout << "Ticket is not available" << endl;
		}
		
	}



}



//void bookATicket(Database& flightDB)
//{
//	
//	int flNumber;
//	
//
//	
//	cout << "flight number:? ";
//	cin >> flNumber;
//	
//	
//
//	flightDB.bookATicket(flight, passenger);
//
//	//cout << "Your ticket is booked!" << endl;
//
//}

//void DisplayBooking(Database& flightDB)
//{
//	flightDB.DisplayBooking();
//
//}


	


	




void displayAllFlights(Database& flightDB)
{
	flightDB.displayAllFlights();
}

void addPassenger(Database& flightDB)
{
	string firstName;
	string lastName;
	int age;
	int phoneNumber;
	

	cout << "Passenger first name? ";
	cin >> firstName;
	cout << "Passenger last name ? ";
	cin >> lastName;
	cout << "Passenger Age? ";
	cin >> age;
	cout << "Passenger Phone number? ";
	cin >> phoneNumber;

	flightDB.addPassenger(firstName, lastName, age, phoneNumber);

}

void DisplayAllPassengers(Database& flightDB)
{
	flightDB.DisplayAllPassengers();
}



bool SelectTheMatchingFlight(Database& flightDB)
{
    int flNumber;
	string flDestination;
	cout << "Flight Number? ";
	cin >> flNumber;
	
	flightDB.SelectTheMatchingFlight(flNumber);
	return false;
}

