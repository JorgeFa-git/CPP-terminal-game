#include <iostream>
#include "./Log.cpp"
#include "./Entities.cpp"

int main()
{
	Log log;
	log.Print("Hello!", log.LevelError);

	Player PlayerOne = Player(new BaseStats(300, 0.5, 15), Entity_type::Human, "Joreg");

	log.Print(PlayerOne.m_Name, log.LevelInfo);

}