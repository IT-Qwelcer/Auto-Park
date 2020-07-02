#pragma once
template<typename T>
class Route
{
public:
	Route(T route);
	~Route();

	T GetRoute();

private:
	T route;
};

