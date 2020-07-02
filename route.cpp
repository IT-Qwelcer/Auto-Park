#include "route.h"

template<typename T>
inline Route<T>::Route(T route)
{
	this->route = route;
}

template<typename T>
Route<T>::~Route()
{
}

template<typename T>
T Route<T>::GetRoute()
{
	return route;
}
