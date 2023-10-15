// wap that performs addition of time in hours and minutes in format.

#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    // Function to add another Time object to this object
    Time addTime(const Time& other) {
        int totalMinutes = minutes + other.minutes;
        int carry = totalMinutes / 60;
        totalMinutes %= 60;
        int totalHours = hours + other.hours + carry;
        return Time(totalHours, totalMinutes);
    }

    // Function to display the time in the specified format
    void displayTime() {
        std::cout << "Time: " << hours << " hours and " << minutes << " minutes." << std::endl;
    }
};

int main() {
    Time time1(2, 45); // 2 hours and 45 minutes
    Time time2(1, 30); // 1 hour and 30 minutes

    Time totalTime = time1.addTime(time2);

    std::cout << "Time 1: ";
    time1.displayTime();

    std::cout << "Time 2: ";
    time2.displayTime();

    std::cout << "Total Time: ";
    totalTime.displayTime();

    return 0;
}
