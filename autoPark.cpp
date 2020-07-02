#include "autoPark.h"

template<typename T>
inline AutoPark<T>::AutoPark(T bus, T driverInitials)
{
	this->bus = bus;
	this->driverInitials = driverInitials;
}

template<typename T>
AutoPark<T>::~AutoPark()
{
}

template<typename T>
T AutoPark<T>::GetBus()
{
	return bus;
}

template<typename T>
T AutoPark<T>::GetDriverInitials()
{
	return driverInitials;
}
