#pragma once
#include <string>

namespace AirlineReservationSystemApp {
	class Flight {
	public:
		Flight() = default;
		Flight(int flNumber, std::string& flName, std::string& flSource, std::string& flDestination,
			int flStartTime, int flDuration, int flFare);

		int getFlightNumber();
		void setFlightNumber(int flightNumber);
		std::string& getFlightName();
		std::string& getFlightSource();
		std::string& getFlightDestination();
		int getFlightStartTime();
		int getFlightDuration();
		int getFlightFare();
		void display();
		

	private:
		int fNumber = -1;
		std::string fName;
		std::string fSource;
		std::string fDestination;
		int fStartTime;
		int fDuration;
		int fare;
	};
}
