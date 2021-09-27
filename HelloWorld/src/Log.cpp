#include <iostream>

class Log
{
public:
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};
private:
	Level m_LogLevel = LevelInfo;
public:
	void Print(const char* msg, Level level)
	{
		if (level == LevelError) {
			std::cout << "[ERROR]: " << msg << std::endl;
		}
		else if (level == LevelWarning) {
			std::cout << "[WARN]: " << msg << std::endl;
		}
		else if (level == LevelInfo) {
			std::cout << "[INFO]: " << msg << std::endl;
		}
	}
};