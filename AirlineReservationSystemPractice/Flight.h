#pragma once
#include <string>

namespace AirlineReservationSystemApp {
	class Flight {
	public:
		Flight() = default;
		Flight(const int flNumber, const std::string& flName, const std::string& flSource, const std::string& flDestination,
			const int flStartTime, const int flDuration, const int flFare);

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
		int fNumber;
		std::string fName;
		std::string fSource;
		std::string fDestination;
		int fStartTime;
		int fDuration;
		int fare;
	};
}
