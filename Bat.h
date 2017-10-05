#pragma once
#include <string>
#include "Hazard.h"
class Bat :public Hazard{
public:
	Bat();
	virtual std::string getName()const;
	virtual std::string hazardInRoom()const;
	virtual std::string attackHazard()const;
	virtual std::string clashedWithHazard()const;
	~Bat();
};