#include "AttendanceValidator.h"

bool AttendanceValidator::meetsMinimum(double attendance, double minimum) {
    return isValidPercentage(attendance) && attendance >= minimum;
}

bool AttendanceValidator::isValidPercentage(double attendance) {
    return attendance >= 0.0 && attendance <= 100.0;
}
