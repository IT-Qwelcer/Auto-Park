#include "autoPark.h"
#include "autoPark.cpp"
#include "route.h"
#include "route.cpp"
#include <iostream>
#include <string>
#include <vector>
#include "windows.h"

int main(int argc, char** argv)
{
	std::string _bus = "Bus";
	std::string _driverInitials, _route;
	_driverInitials = _route = "";

	AutoPark<std::string> autoPark_(_bus, _driverInitials);
	Route<std::string> route_(_route);

	std::vector<std::string> busStop;
	std::vector<std::string> busWay;
	std::vector<std::string> driverInitials;
	std::vector<std::string> route;

	int action = 0;
	do
	{
		std::cout << "\n\n 1.Buy bus" << "\n 2.Sell a bus" << "\n\n 3.Send a bus" << "\n\n 4.Bus stop station" << "\n 5.Bus way station" << "\n\n 0.Exit" << "\n\n\n Select an action" << std::endl;
		std::cin >> action;
		system("cls");

		switch (action)
		{
		case 1:
			busStop.push_back(_bus);
			std::cout << "\n The bus was bought!" << std::endl;
			Sleep(1000); system("cls");
			break;
		case 2:
			busStop.pop_back();
			break;
		case 3:
			std::cout << " Enter the driver's initials -> "; std::cin >> _driverInitials;
			driverInitials.push_back(_driverInitials);

			std::cout << " Enter the route number -> "; std::cin >> _route;
			route.push_back(_route);

			if (autoPark_.GetBus().size() > 0)
			{
				busStop.pop_back(); busWay.push_back(_bus);
			}
			break;
		case 4:
			if (busStop.size() != 0)
			{
				for (size_t i = 0; i < busStop.size(); i++)
				{
					std::cout << "\n\t " << i + 1 << ". Bus -> " << busStop.at(i) << std::endl;
				}
			}
			else
			{
				std::cout << " Empty!" << std::endl;
			}
			break;
		case 5:
			if (busWay.size() != 0)
			{
				for (size_t i = 0; i < busWay.size(); i++)
				{
					std::cout << "\n\t " << i + 1 << ". Bus: " << busWay.at(i) << " | Driver Initials -> " << driverInitials.at(i) << " | Route -> " << route.at(i) << std::endl;
				}
			}
			else
			{
				std::cout << " Empty!" << std::endl;
			}
			break;
		default:
			std::cout << " Exit! (Error!)" << std::endl;
			break;
		}
	} while (action != 0);

	return 0;
}