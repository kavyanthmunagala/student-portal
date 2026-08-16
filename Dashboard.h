#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <cstddef>

class Dashboard {
public:
    static void displaySummary(std::size_t studentCount,
                               std::size_t eligibleCount);
};

#endif
