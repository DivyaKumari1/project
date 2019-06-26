// AirlineReservationSystemPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdafx.h"
#include <iostream>
#include "Database.h"
#include "Passenger.h"
#include "Booking.h"
#include "Flight.h"






using namespace std;
using namespace AirlineReservationSystemApp;

int displayMenu();
void addFlight(Database& flightDB);
void displayAllFlights(Database& flightDB);
bool displaySearchedFlight(Database& flightDB);
void addTicket(Database& flightDB);
void DisplayBooking(Database& flightDB);
void addPassenger(Database& flightDB);
void DisplayAllPassengers(Database& flightDB);

int main()
{
	
	Database flightDB;
	while (true) {
		int selection = displayMenu();
		switch (selection) {
			case 0:
				return 0;
			case 1:
				addFlight(flightDB);
				break;
			case 2:
				displayAllFlights(flightDB);
				break;
			case 3:
				addPassenger(flightDB);
				break;
			case 4:
				DisplayAllPassengers(flightDB);
				break;
			case 5:
				addTicket(flightDB);
				break;
			case 6:
				displaySearchedFlight(flightDB);
				break;
			case 7:
				DisplayBooking(flightDB);
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
	cout << "1) Add a flight" << endl;
	cout << "2) Display all flights" << endl;
	cout << "3) Add passenger" << endl;
	cout << "4) Display all passenger" << endl;
	cout << "5) Book a Ticket" << endl;
	cout << "6) display ticket" << endl;
	cout << "0) Quit" << endl;
	cout << endl;
	cout << "---> ";


cin >> selection;

	return selection;
}

void addTicket(Database& flightDB)
{
	string passName;
	int passAge;
	int pPhoneNo;
	string pSource;
	string pDestination;
	

	cout << "Passenger name? ";
	cin >> passName;
	cout << "Passenger Age? ";
	cin >> passAge;
	cout << "Passenger phone number? ";
	cin >> pPhoneNo;
	cout << "source? ";
	cin >> pSource;
	cout << "destination? ";
	cin >> pDestination;
	

	flightDB.addTicket(passName, passAge, pPhoneNo,  pSource, pDestination);

	//cout << "Your ticket is booked!" << endl;

}

void DisplayBooking(Database& flightDB)
{
	flightDB.DisplayBooking();

}

void addFlight(Database& flightDB)
{
	string flName;
	string flSource;
	string flDestination;
	int flStartTime;
	int flDuration; 
	int flFare;

	cout << "Flight name? ";
	cin >> flName;
	cout << "Flight source? ";
	cin >> flSource;
	cout << "Flight destination? ";
	cin >> flDestination;
	cout << "Flight start time? ";
	cin >> flStartTime;
	cout << "Flight duration? ";
	cin >> flDuration;
	cout << "Flight fare? ";
	cin >> flFare;

	flightDB.addFlight(flName, flSource, flDestination, flStartTime, flDuration, flFare);
	
}

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



bool displaySearchedFlight(Database& flightDB)
{
	string flSource;
	string flDestination;
	cout << "Flight source? ";
	cin >> flSource;
	cout << "Flight destination? ";
	cin >> flDestination;
	flightDB.displaySearchedFlight(flSource, flDestination);
	return false;
}

