#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

int main() {
    std::string timezone = "Asia/Jakarta";
    setenv("TZ", timezone.c_str(), 1);

    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t rawtime = std::chrono::system_clock::to_time_t(now);
    std::tm *timeinfo = std::localtime(&rawtime);

    std::cout << "Time in seconds since epoch: " << rawtime << std::endl;

    std::cout << "\nCurrent date and time: ";
    std::cout << std::put_time(timeinfo, "%c %Z") << std::endl;

    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%y-%m-%d-%H-%M", timeinfo);
    std::cout << "\nFormatting the current date and time: " << buffer << std::endl;

    std::cout << "\nCurrent Year: " << (timeinfo->tm_year + 1900) << std::endl;
    std::cout << "Current Month of the year: " << (timeinfo->tm_mon + 1) << std::endl;
    std::cout << "Day of the month: " << timeinfo->tm_mday << std::endl;
    std::cout << "Day of the week: " << timeinfo->tm_wday << std::endl;

    return 0;
}
