#include "Dashboard.h"

#include <iostream>

void Dashboard::displaySummary(std::size_t studentCount,
                                std::size_t eligibleCount) {
    std::cout << "\n--- Student Dashboard ---\n";
    std::cout << "Total students: " << studentCount << '\n';
    std::cout << "Attendance eligible: " << eligibleCount << '\n';
}
