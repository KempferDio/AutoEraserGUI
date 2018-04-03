#ifndef LOG_H
#define LOG_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include <chrono>
#define LOG_FILE_NAME "AutoEraserLog.txt"



class Log
{
  public:
    static std::chrono::milliseconds startTime;

    template <typename T, typename... Args>
    static void LogInfo(T first, Args... args)
    {
        std::ostringstream stm;
        if (callCounter == 0)
        {
            time_t t = GetCurrentTime();
            std::string _time(std::ctime(&t));
            size_t end = _time.find_last_of('\n');
            std::string sTime = _time.substr(0, end);
            stm << sTime << " [ INFO ] ";
        }
        stm << first << " ";
        std::cout << stm.str();
        RecordIntoLogFile(stm.str());
        callCounter++;
        LogInfo(args...);
    }

    template <typename T, typename... Args>
    static void LogDebug(T first, Args... args)
    {
        std::ostringstream stm;
        if (callCounter == 0)
        {
            time_t t = GetCurrentTime();
            std::string _time(std::ctime(&t));
            size_t end = _time.find_last_of('\n');
            std::string sTime = _time.substr(0, end);
            stm << sTime << " [ DEBUG ] ";
        }
        stm << first << " ";
        std::cout << stm.str();
        RecordIntoLogFile(stm.str());
        callCounter++;
        LogDebug(args...);
    }

    template <typename T, typename... Args>
    static void LogWarning(T first, Args... args)
    {
        std::ostringstream stm;
        if (callCounter == 0)
        {
            time_t t = GetCurrentTime();
            std::string _time(std::ctime(&t));
            size_t end = _time.find_last_of('\n');
            std::string sTime = _time.substr(0, end);
            stm << sTime << " [ WARNING ] ";
        }
        stm << first << " ";
        std::cout << stm.str();
        RecordIntoLogFile(stm.str());
        callCounter++;
        LogWarning(args...);
    }

    template <typename T, typename... Args>
    static void LogError(T first, Args... args)
    {
        std::ostringstream stm;
        if (callCounter == 0)
        {
            time_t t = GetCurrentTime();
            std::string _time(std::ctime(&t));
            size_t end = _time.find_last_of('\n');
            std::string sTime = _time.substr(0, end);
            stm << sTime << " [ ERROR ] ";
        }
        stm << first << " ";
        std::cout << stm.str();
        RecordIntoLogFile(stm.str());
        callCounter++;
        LogError(args...);
    }

    static void LogInfo()
    {
        breakRecoursion();
    }

    static void LogWarning()
    {
        breakRecoursion();
    }

    static void LogDebug()
    {
        breakRecoursion();
    }

    static void LogError()
    {
        breakRecoursion();
    }

  private:
    static void RecordIntoLogFile(std::string fullMsg);
    static time_t GetCurrentTime();
    static int callCounter;

    static void breakRecoursion()
    {
        callCounter = 0;
        std::cout << "\n";
        RecordIntoLogFile("\n");
    }
};

#endif
