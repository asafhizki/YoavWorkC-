
#include <string>
#include "Bat.h"
Bat::Bat(){}

std::string Bat::getName()const{
	return "Bat";
}
std::string Bat::hazardInRoom()const{
	return "Bat is near";
}
std::string Bat::attackHazard()const{
	return "Bat is laughing";
}
std::string Bat::clashedWithHazard()const{
	return "A Bat will move you";
}