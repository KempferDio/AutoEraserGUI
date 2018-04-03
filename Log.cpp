#include <Log.h>

using namespace std::chrono;
int Log::callCounter = 0;

std::chrono::milliseconds Log::startTime =
    std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch());

void Log::RecordIntoLogFile(std::string fullMsg) {
    std::ofstream logFile;

    logFile.open(LOG_FILE_NAME, std::fstream::app);

    logFile << fullMsg;

    logFile.close();
}

time_t Log::GetCurrentTime() {
    system_clock::time_point p = system_clock::now();

    std::time_t _time = system_clock::to_time_t(p);
    return _time;
}
