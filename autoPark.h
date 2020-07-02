#pragma once
template<typename T>
class AutoPark
{
public:
	AutoPark(T bus, T driverInitials);
	~AutoPark();

	T GetBus();
	T GetDriverInitials();

private:
	T bus;
	T driverInitials;
};

